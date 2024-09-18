#pragma once
#include "XOR_chars_2.h"

// FUNCTION: XOR_Cipher
// INPUT --> (std::string message, char key)
// STEP #0: make string result
// STEP #1: for each term i of element message[i] XOR_bits against key and return it back to result[i]
// step #3: return result
// OUTPUT <-- string ciphered XOR_Cipher 

std::string XOR_Cipher_3(std::string message, char key) {
	std::string result;

	for (int i = 0; i < message.size(); i++) {
		result[i] = XOR_Char_2(message[i], key);
	}

	return result;
}