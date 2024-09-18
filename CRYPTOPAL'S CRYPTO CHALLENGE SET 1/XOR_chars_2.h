#pragma once
#include "hex_to_bits_2.h"
#include "XOR_bits_2.h"
#include "bits_to_hex_2.h"


using byte = unsigned char;

char XOR_Char_2(char a, char b) {
	//st1: convert a and b into a string value of eachs bit representation (can use an array of ints 0 and 1) called string/int array a_bits and b_bits
	std::array<int, 4> array_a = hex_to_bits(a);
	std::array<int, 4> array_b = hex_to_bits(b);

	//st2: XOR (in the correct order) these two bit representation strings(or int array[]) by iterating through each a and b element one at a time and storing the resulting 1/0 in int hex_bits[]
	std::array<int, 4> XOR_hex = XOR_bits(array_a, array_b);

	//st3: convert int hex[] to char XORAB through "reverse hexing" to XORab and return
	char result = bits_to_hex(XOR_hex);
	return result;

}