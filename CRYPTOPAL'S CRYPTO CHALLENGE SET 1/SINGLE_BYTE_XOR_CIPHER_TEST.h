#pragma once
#include "XOR_Cipher_3.h"

void TEST_3(std::string message, char key, std::string expected) {

	std::string result = XOR_Cipher_3(message, key);

	if (expected == result)
	{
		std::cout << "PASSED" << std::endl;
	}
	else 
	{
		std::cout << "FAILED" << std::endl;
		std::cout << "result: " << result << std::endl;
		std::cout << "expected: " << expected << std::endl;
	}
}

void Challenge_Problem_3_TESTS() {
	TEST_3("abc", 'e', "452");
}