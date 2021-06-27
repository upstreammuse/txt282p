package net.salmonsoft.ti;

import java.io.FileNotFoundException;
import java.io.IOException;
import java.nio.file.FileAlreadyExistsException;
import java.nio.file.Files;
import java.nio.file.Paths;
import java.nio.file.StandardOpenOption;

class Ti82BasicTokenizer {

	Ti82BasicProgram readText(String filename) throws IOException {
		var filePath = Paths.get(filename).toAbsolutePath();
		if (!Files.isRegularFile(filePath)) {
			throw new FileNotFoundException("Cannot tokenize '" + filePath + "' because it does not exist");
		}

		var program = new Ti82BasicProgram();
		var tokens = new Ti82BasicTokens(program);
		int[] lineNumber = { 0 };

		var errors = new StringBuffer();
		Files.lines(filePath).forEach(line -> {
			lineNumber[0]++;
			try {
				tokens.parseLine(line);
			} catch (IOException ex) {
				errors.append("Error on line " + lineNumber[0] + "\n");
				errors.append(ex.getLocalizedMessage() + "\n");
				return;
			}
		});
		if (errors.length() != 0) {
			throw new IOException(errors.toString());
		}

		return program;
	}

	void writeTokenized(String filename, Ti82BasicProgram program) throws IOException {
		var filePath = Paths.get(filename).toAbsolutePath();
		if (!Files.notExists(filePath)) {
			throw new FileAlreadyExistsException("Cannot write to '" + filePath + "' because it already exists");
		}

		try (var fos = Files.newOutputStream(filePath, StandardOpenOption.CREATE_NEW)) {
			fos.write(program.toByteArray());
		}
	}

}
