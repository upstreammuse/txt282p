package net.salmonsoft.ti;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

class Ti82BasicTokenMap {

	private Map<List<Byte>, String> byteToString = new HashMap<>();
	private Map<String, List<Byte>> stringToByte = new HashMap<>();

	void add(String s, List<Byte> ba) {
		assert (!stringToByte.containsKey(s));
		assert (!byteToString.containsKey(ba));
		stringToByte.put(s, ba);
		byteToString.put(ba, s);
	}

	void add(String s, byte b) {
		List<Byte> ba = new ArrayList<>();
		ba.add(b);
		add(s, ba);
	}

	void add(String s, byte b1, byte b2) {
		List<Byte> ba = new ArrayList<>();
		ba.add(b1);
		ba.add(b2);
		add(s, ba);
	}

	void add(String s, int b) {
		add(s, (byte) b);
	}

	void add(String s, int b1, int b2) {
		add(s, (byte) b1, (byte) b2);
	}

	List<Byte> get(String s) {
		return stringToByte.get(s);
	}

	boolean matches(String s) {
		return stringToByte.containsKey(s);
	}

	int possibleMatches(String s) {
		var matches = 0;
		for (var entry : stringToByte.entrySet()) {
			if (entry.getKey().startsWith(s)) {
				matches++;
				if (matches > 1) {
					return matches;
				}
			}
		}
		return matches;
	}

}
