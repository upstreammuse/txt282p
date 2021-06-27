package net.salmonsoft.ti;

import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.nio.charset.StandardCharsets;
import java.util.List;

class Ti82BasicProgram {

	private byte[] comment;
	private ByteArrayOutputStream data = new ByteArrayOutputStream();
	private boolean isProtected = false;
	private byte[] name;
	private boolean started = false;

	void addLineStart() throws IOException {
		if (!started) {
			throw new IOException("Cannot have program content without a started program");
		}

		// if this line is a continuation of the program, insert the "\n:" byte sequence
		if (data.size() != 0) {
			data.write(0x3F);
		}
	}

	// TODO make this take a BAOS as well?
	void addProgram(List<Byte> data) throws IOException {
		if (!started) {
			throw new IOException("Cannot have program content without a started program");
		}
		for (var b : data) {
			this.data.write(b);
		}
	}

	void setComment(String comment) throws IOException {
		if (started) {
			throw new IOException("Cannot set comment within started program");
		} else if (this.comment != null) {
			throw new IOException("Cannot set comment, comment already set");
		} else if (comment.length() > 42) {
			throw new IOException("Comment is too long, max length is 42 characters");
		} else {
			var commentBytes = new byte[42];
			for (int i = 0; i < commentBytes.length && i < comment.length(); i++) {
				var c = comment.codePointAt(i);
				if (c < 0 || c > 255) {
					throw new IOException("Only basic ASCII characters allowed in comment");
				}
				commentBytes[i] = (byte) c;
			}
			this.comment = commentBytes;
		}
	}

	void setName(String name) throws IOException {
		if (started) {
			throw new IOException("Cannot set name within started program");
		} else if (this.name != null) {
			throw new IOException("Cannot set name, name already set");
		} else if (name.length() > 8) {
			throw new IOException("Name is too long, max length is 8 characters");
		} else {
			var nameBytes = new byte[8];
			for (int i = 0; i < nameBytes.length && i < name.length(); i++) {
				var c = name.codePointAt(i);
				if (c < 0 || c > 255) {
					throw new IOException("Only basic ASCII characters allowed in name");
				}
				nameBytes[i] = (byte) c;
			}
			this.name = nameBytes;
		}
	}

	void start() throws IOException {
		if (started) {
			throw new IOException("Cannot start program, program already started");
		}
		started = true;
	}

	void stop() throws IOException {
		if (!started) {
			throw new IOException("Cannot stop program, program already stopped");
		}
		started = false;
	}

	byte[] toByteArray() throws IOException {
		if (name == null) {
			throw new IOException("Cannot compile program, name not set");
		}
		if (started) {
			throw new IOException("Cannot compile program, not stopped");
		}

		// program header
		var compiled = new ByteArrayOutputStream();
		compiled.write("**TI82**".getBytes(StandardCharsets.US_ASCII));

		// unknown bytes
		compiled.write(0x1A);
		compiled.write(0x0A);
		compiled.write(0x00);

		// program comment
		if (comment == null) {
			comment = new byte[42];
		}
		compiled.write(comment);

		// program size plus extra 17 unknown bytes
		// TODO see if 17 bytes is the data between this size field and the start of
		// program data
		// -- quick count seems to indicate that 17 bytes past this size field is the
		// program data start
		var size1 = new byte[2];
		size1[0] = (byte) ((data.size() + 17) % 256);
		size1[1] = (byte) ((data.size() + 17) / 256);
		compiled.write(size1[0]);
		compiled.write(size1[1]);

		// start tracking the checksum from here
		var checksum = 0;

		// more unknown bytes
		checksum += 0x0B;
		checksum += 0x00;
		compiled.write(0x0B);
		compiled.write(0x00);

		// program size plus extra 2 unknown bytes
		// TODO figure out what the offset is for
		var size2 = new byte[2];
		size2[0] = (byte) ((data.size() + 2) % 256);
		size2[1] = (byte) ((data.size() + 2) / 256);
		checksum += size2[0];
		checksum += size2[1];
		compiled.write(size2[0]);
		compiled.write(size2[1]);

		// protection flag
		checksum += isProtected ? 0x06 : 0x05;
		compiled.write(isProtected ? 0x06 : 0x05);

		// program name
		for (int i = 0; i < name.length; i++) {
			checksum += name[i];
		}
		compiled.write(name);

		// again with the size plus 2 extra bytes
		// -- in this case the 2 extra bytes are probably for the following size field,
		// which is just the program data size
		checksum += size2[0];
		checksum += size2[1];
		compiled.write(size2[0]);
		compiled.write(size2[1]);

		// and then just the program data size
		var size3 = new byte[2];
		size3[0] = (byte) (data.size() % 256);
		size3[1] = (byte) (data.size() / 256);
		checksum += size3[0];
		checksum += size3[1];
		compiled.write(size3[0]);
		compiled.write(size3[1]);

		// finally the program data
		var progdata = data.toByteArray();
		for (var i = 0; i < progdata.length; i++) {
			checksum += progdata[i];
		}
		compiled.write(progdata);

		// and then the checksum
		compiled.write(checksum % 256);
		compiled.write(checksum / 256 % 256);

		return compiled.toByteArray();
	}

}
