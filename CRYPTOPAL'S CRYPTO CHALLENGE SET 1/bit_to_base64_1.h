#pragma once
#include "hex_to_bits_1.h"

std::vector<unsigned char> bit_to_base64_1(std::vector<unsigned char> bits)
{
    int decimal;

    const std::string BASE64 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

    std::vector<unsigned char> base64_Result;

    for (long unsigned int i = 0; i < bits.size(); i = i + 6)
    {
        if((i+5)  < bits.size())
            decimal = (bits[i + 5] - '0');

        if ((i + 4) < bits.size())
            decimal = decimal + ((bits[i + 4] - '0') * 2);

        if ((i + 3) < bits.size())
            decimal = decimal + ((bits[i + 3] - '0') * 4);

        if ((i + 2) < bits.size())
            decimal = decimal + ((bits[i + 2] - '0') * 8);

        if ((i + 1) < bits.size())
            decimal = decimal + ((bits[i + 1] - '0') * 16);

        if ((i) < bits.size())
            decimal = decimal + ((bits[i] - '0') * 32);
        
        base64_Result.push_back(BASE64[decimal]);
        decimal = 0;
    }
 

    return base64_Result;

}

void test_bit_to_base64_1() {
    std::vector<unsigned char> bits_test = {};
    hex_to_bits_1({ '0' }, bits_test);
    hex_to_bits_1({ 'a' }, bits_test);

    std::vector<unsigned char> base64_test = bit_to_base64_1(bits_test);
    for (int i = 0; i < base64_test.size(); i++) {
        std::cout << base64_test[i] << " ";
    }
    std::cout << std::endl;
}