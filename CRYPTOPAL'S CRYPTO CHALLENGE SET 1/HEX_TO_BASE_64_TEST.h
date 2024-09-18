#pragma once
#include "hex_to_bits_1.h"
#include "bit_to_base64_1.h"

void Challenge_Problem_1_TESTS(std::string hex, std::string expected) {
	
	// TODO
	//convert string hex to std::vector<unsigned char> hex_bytes
	std::vector<unsigned char> hex_bytes = {};
	hex_bytes.reserve(hex.size());

	for (int i = 0; i < hex.size(); i++) {
		hex_bytes.push_back(hex[i]);
	}
	//convert 
	std::vector<unsigned char> expected_bytes = {};
	hex_bytes.reserve(expected.size());
	for (int i = 0; i < expected.size(); i++) {
		expected_bytes.push_back(expected[i]);
	}
	
	//converting hex_bytes to its bit representation
	std::vector<unsigned char> bits = {};
	hex_to_bits_1(hex_bytes, bits);

	//convert std::vector<unsigned char> hex_bytes to string base64_check
	std::vector<unsigned char> base64_check = bit_to_base64_1(bits);

	for (int i = 0; i < expected_bytes.size(); i++) {
		if (base64_check[i] != expected_bytes[i]) {
			std::cout << "ERROR: result != expected" << std::endl;
			std::cout << "result: ";
			for (int i = 0; i < base64_check.size(); i++) {
				std::cout << base64_check[i];
			}
			std::cout << std::endl;
			std::cout << "expected: ";
			for (int i = 0; i < expected_bytes.size(); i++) {
				std::cout << expected_bytes[i];
			}
		}
	}

	
	
}