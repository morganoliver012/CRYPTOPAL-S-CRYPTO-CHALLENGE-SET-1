#pragma once
#include "hex_to_bits_1.h"
#include "bit_to_base64_1.h"

std::vector<unsigned char> hex_to_base64_1(std::vector<unsigned char> hex) {

	// TODO
	//convert string hex to std::vector<unsigned char> hex_bytes
	std::vector<unsigned char> hex_bytes = {};
	for (int i = 0; i < hex.size(); i++) {
		hex_bytes[i] = hex[i];
	}
	//convert 
	std::vector<unsigned char> expected_bytes = {};
	for (int i = 0; i < expected.size(); i++) {
		expected_bytes[i] = expected[i];
	}

	//making bits then returning the hex bits
	std::vector<unsigned char> bits = {};
	hex_to_bits_1(hex_bytes, bits);

	//convert std::vector<unsigned char> hex_bytes to string base64_check
	std::vector<unsigned char> base64_check = bit_to_base64_1(bits);

	//


}