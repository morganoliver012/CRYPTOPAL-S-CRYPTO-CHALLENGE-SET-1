#pragma once

#include <vector>
#include <iostream>

std::vector<unsigned char> hex_to_bits_1(std::vector<unsigned char> hex) {

	std::vector<unsigned char> bits = {};

	for (int i = 0; i < hex.size(); i++) {
		switch (hex[i]) {
		case '0':
			bits.push_back('0');
			bits.push_back('0');
			bits.push_back('0');
			bits.push_back('0');
			break;
		case '1':
			//return { '0','0','0','1' };
			bits.push_back('0');
			bits.push_back('0');
			bits.push_back('0');
			bits.push_back('1');
			break;
		case '2':
			//return { '0','0','1','0' };
			bits.push_back('0');
			bits.push_back('0');
			bits.push_back('1');
			bits.push_back('0');
			break;
		case '3':
			//return { '0','0','1','1' };
			bits.push_back('0');
			bits.push_back('0');
			bits.push_back('1');
			bits.push_back('1');
			break;
		case '4':
			//return { '0','1','0','0' };
			bits.push_back('0');
			bits.push_back('1');
			bits.push_back('0');
			bits.push_back('0');
			break;
		case '5':
			//return { '0','1','0','1' };
			bits.push_back('0');
			bits.push_back('1');
			bits.push_back('0');
			bits.push_back('1');
			break;
		case '6':
			//return { '0','1','1','0' };
			bits.push_back('0');
			bits.push_back('1');
			bits.push_back('1');
			bits.push_back('0');
			break;
		case '7':
			//return { '0','1','1','1' };
			bits.push_back('0');
			bits.push_back('1');
			bits.push_back('1');
			bits.push_back('1');
			break;
		case '8':
			//return { '1','0','0','0' };
			bits.push_back('1');
			bits.push_back('0');
			bits.push_back('0');
			bits.push_back('0');
			break;
		case '9':
			//return { '1','0','0','1' };
			bits.push_back('1');
			bits.push_back('0');
			bits.push_back('0');
			bits.push_back('1');
			break;
		case 'a':
			//return { '1','0','1','0' };
			bits.push_back('1');
			bits.push_back('0');
			bits.push_back('1');
			bits.push_back('0');
			break;
		case 'b':
			//return { '1','0','1','1' };
			bits.push_back('1');
			bits.push_back('0');
			bits.push_back('1');
			bits.push_back('1');
			break;
		case 'c':
			//return {'1','1','0','0' };
			bits.push_back('1');
			bits.push_back('1');
			bits.push_back('0');
			bits.push_back('0');
			break;
		case 'd':
			//return { '1','1','0','1' };
			bits.push_back('1');
			bits.push_back('1');
			bits.push_back('0');
			bits.push_back('1');
			break;
		case 'e':
			//return { '1','1','1','0' };

			bits.push_back('1');
			bits.push_back('1');
			bits.push_back('1');
			bits.push_back('0');
			break;
		case 'f':
			//return { '1','1','1','1' };
			bits.push_back('1');
			bits.push_back('1');
			bits.push_back('1');
			bits.push_back('1');
			break;
		case 'A':
			//return { '1','0','1','0' };
			bits.push_back('1');
			bits.push_back('0');
			bits.push_back('1');
			bits.push_back('0');
			break;
		case 'B':
			//return { '1','0','1','1' };
			bits.push_back('1');
			bits.push_back('0');
			bits.push_back('1');
			bits.push_back('1');
			break;
		case 'C':
			//return { '1','1','0','0' };
			bits.push_back('1');
			bits.push_back('1');
			bits.push_back('0');
			bits.push_back('0');
			break;
		case 'D':
			//return { '1','1','0','1' };
			bits.push_back('1');
			bits.push_back('1');
			bits.push_back('0');
			bits.push_back('1');
			break;
		case 'E':
			//return { '1','1','1','0' };
			bits.push_back('1');
			bits.push_back('1');
			bits.push_back('1');
			bits.push_back('0');
			break;
		case 'F':
			//return { '1','1','1','1' };
			bits.push_back('1');
			bits.push_back('1');
			bits.push_back('1');
			bits.push_back('1');
			break;
		}
	}
	return bits;
}

void hex_to_bits_1(std::vector<unsigned char> hex, std::vector<unsigned char> &bits) {

	//std::vector<unsigned char> bits = {};

	for (int i = 0; i < hex.size(); i++) {
		switch (hex[i]) {
		case '0':
			bits.push_back('0');
			bits.push_back('0');
			bits.push_back('0');
			bits.push_back('0');
			break;
		case '1':
			//return { '0','0','0','1' };
			bits.push_back('0');
			bits.push_back('0');
			bits.push_back('0');
			bits.push_back('1');
			break;
		case '2':
			//return { '0','0','1','0' };
			bits.push_back('0');
			bits.push_back('0');
			bits.push_back('1');
			bits.push_back('0');
			break;
		case '3':
			//return { '0','0','1','1' };
			bits.push_back('0');
			bits.push_back('0');
			bits.push_back('1');
			bits.push_back('1');
			break;
		case '4':
			//return { '0','1','0','0' };
			bits.push_back('0');
			bits.push_back('1');
			bits.push_back('0');
			bits.push_back('0');
			break;
		case '5':
			//return { '0','1','0','1' };
			bits.push_back('0');
			bits.push_back('1');
			bits.push_back('0');
			bits.push_back('1');
			break;
		case '6':
			//return { '0','1','1','0' };
			bits.push_back('0');
			bits.push_back('1');
			bits.push_back('1');
			bits.push_back('0');
			break;
		case '7':
			//return { '0','1','1','1' };
			bits.push_back('0');
			bits.push_back('1');
			bits.push_back('1');
			bits.push_back('1');
			break;
		case '8':
			//return { '1','0','0','0' };
			bits.push_back('1');
			bits.push_back('0');
			bits.push_back('0');
			bits.push_back('0');
			break;
		case '9':
			//return { '1','0','0','1' };
			bits.push_back('1');
			bits.push_back('0');
			bits.push_back('0');
			bits.push_back('1');
			break;
		case 'a':
			//return { '1','0','1','0' };
			bits.push_back('1');
			bits.push_back('0');
			bits.push_back('1');
			bits.push_back('0');
			break;
		case 'b':
			//return { '1','0','1','1' };
			bits.push_back('1');
			bits.push_back('0');
			bits.push_back('1');
			bits.push_back('1');
			break;
		case 'c':
			//return {'1','1','0','0' };
			bits.push_back('1');
			bits.push_back('1');
			bits.push_back('0');
			bits.push_back('0');
			break;
		case 'd':
			//return { '1','1','0','1' };
			bits.push_back('1');
			bits.push_back('1');
			bits.push_back('0');
			bits.push_back('1');
			break;
		case 'e':
			//return { '1','1','1','0' };

			bits.push_back('1');
			bits.push_back('1');
			bits.push_back('1');
			bits.push_back('0');
			break;
		case 'f':
			//return { '1','1','1','1' };
			bits.push_back('1');
			bits.push_back('1');
			bits.push_back('1');
			bits.push_back('1');
			break;
		case 'A':
			//return { '1','0','1','0' };
			bits.push_back('1');
			bits.push_back('0');
			bits.push_back('1');
			bits.push_back('0');
			break;
		case 'B':
			//return { '1','0','1','1' };
			bits.push_back('1');
			bits.push_back('0');
			bits.push_back('1');
			bits.push_back('1');
			break;
		case 'C':
			//return { '1','1','0','0' };
			bits.push_back('1');
			bits.push_back('1');
			bits.push_back('0');
			bits.push_back('0');
			break;
		case 'D':
			//return { '1','1','0','1' };
			bits.push_back('1');
			bits.push_back('1');
			bits.push_back('0');
			bits.push_back('1');
			break;
		case 'E':
			//return { '1','1','1','0' };
			bits.push_back('1');
			bits.push_back('1');
			bits.push_back('1');
			bits.push_back('0');
			break;
		case 'F':
			//return { '1','1','1','1' };
			bits.push_back('1');
			bits.push_back('1');
			bits.push_back('1');
			bits.push_back('1');
			break;
		}
	}
}

void test_hex_to_bits_1() {
	std::vector<unsigned char> result = hex_to_bits_1({'0','a'});;
	//hex_to_bits_1('a');
	std::cout << result[0] << " ";
	std::cout << result[1] << " ";
	std::cout << result[2] << " ";
	std::cout << result[3] << " ";
	std::cout << result[4] << " ";
	std::cout << result[5] << " ";
	std::cout << result[6] << " ";
	std::cout << result[7] << std::endl;

	std::vector<unsigned char> bits_test = {};
	hex_to_bits_1({ '0' }, bits_test);
	hex_to_bits_1({ 'a' }, bits_test);
	for (int i = 0; i < bits_test.size(); i++) {
		std::cout << bits_test[i] << " ";
	}
	std::cout << std::endl;
}