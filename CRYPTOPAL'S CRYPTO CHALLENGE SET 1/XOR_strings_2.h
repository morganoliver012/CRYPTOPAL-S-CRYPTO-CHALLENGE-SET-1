#pragma once
#include "XOR_chars_2.h"
#include <string>

std::string XOR_strings(std::string A, std::string B) {
	if (A.length() != B.length()) {
		std::cout << "ERROR (in XOR-Strings) --> Fixed XOR must have two strings of the same length" << std::endl;
	}

	int s_size = A.length();
	std::string XOR_AB = "";





	//XOR_AB = new std::string[s_size];

	for (int i = 0; i < s_size; i++) {
		char next_char = XOR_Char_2(A[i], B[i]);

		XOR_AB += next_char;
	}

	//std::string XOR_AB_result = *XOR_AB;

	return XOR_AB;
}
