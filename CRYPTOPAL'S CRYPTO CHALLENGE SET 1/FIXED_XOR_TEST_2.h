#pragma once
#include "XOR_strings_2.h"

void TEST_2(std::string hex_first, std::string hex_second, std::string expected) {

	std::string result_XOR_String = XOR_strings(hex_first, hex_second);


	if (result_XOR_String == expected) {
		return;
	}
	else
	{
		std::cout << "ERROR (in TEST) --> result_XOR_String != expected" << std::endl;
		std::cout << "expected: " << expected << std::endl;
		std::cout << "result_XOR_String: " << result_XOR_String << std::endl;
		return;
	}

}

void Challenge_Problem_2_TESTS() {
	// unit tests for size 1
	TEST_2("a", "0", "a");
	TEST_2("a", "1", "b");
	TEST_2("a", "2", "8");
	TEST_2("a", "3", "9");
	TEST_2("a", "4", "e");
	TEST_2("a", "5", "f");
	TEST_2("a", "6", "c");
	TEST_2("a", "7", "d");
	TEST_2("a", "8", "2");
	TEST_2("a", "9", "3");
	TEST_2("a", "a", "0");
	TEST_2("a", "b", "1");
	TEST_2("a", "c", "6");
	TEST_2("a", "d", "7");
	TEST_2("a", "e", "4");
	TEST_2("a", "f", "5");
	TEST_2("0", "0", "0");
	TEST_2("0", "1", "1");
	TEST_2("0", "2", "2");
	TEST_2("0", "3", "3");
	TEST_2("0", "4", "4");
	TEST_2("0", "5", "5");
	TEST_2("0", "6", "6");
	TEST_2("0", "7", "7");
	TEST_2("0", "8", "8");
	TEST_2("0", "9", "9");
	TEST_2("0", "a", "a");
	TEST_2("0", "b", "b");
	TEST_2("0", "c", "c");
	TEST_2("0", "d", "d");
	TEST_2("0", "e", "e");
	TEST_2("0", "f", "f");
	TEST_2("1", "0", "1");
	TEST_2("1", "1", "0");
	TEST_2("1", "2", "3");
	TEST_2("1", "3", "2");
	TEST_2("1", "4", "5");
	TEST_2("1", "5", "4");
	TEST_2("1", "6", "7");
	TEST_2("1", "7", "6");
	TEST_2("1", "8", "9");
	TEST_2("1", "9", "8");
	TEST_2("1", "a", "b");
	TEST_2("1", "b", "a");
	TEST_2("1", "c", "d");
	TEST_2("1", "d", "c");
	TEST_2("1", "e", "f");
	TEST_2("1", "f", "e");
	TEST_2("2", "0", "2");
	TEST_2("2", "1", "3");
	TEST_2("2", "2", "0");
	TEST_2("2", "3", "1");
	TEST_2("2", "4", "6");
	TEST_2("2", "5", "7");
	TEST_2("2", "6", "4");
	TEST_2("2", "7", "5");
	TEST_2("2", "8", "a");
	TEST_2("2", "9", "b");
	TEST_2("2", "a", "8");
	TEST_2("2", "b", "9");
	TEST_2("2", "c", "e");
	TEST_2("2", "d", "f");
	TEST_2("2", "e", "c");
	TEST_2("2", "f", "d");
	TEST_2("3", "0", "3");
	TEST_2("3", "1", "2");
	TEST_2("3", "2", "1");
	TEST_2("3", "3", "0");
	TEST_2("3", "4", "7");
	TEST_2("3", "5", "6");
	TEST_2("3", "6", "5");
	TEST_2("3", "7", "4");
	TEST_2("3", "8", "b");
	TEST_2("3", "9", "a");
	TEST_2("3", "a", "9");
	TEST_2("3", "b", "8");
	TEST_2("3", "c", "f");
	TEST_2("3", "d", "e");
	TEST_2("3", "e", "d");
	TEST_2("3", "f", "c");
}