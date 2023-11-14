/*
Author: Cyrus Haywood

Date: 14 November 2023

Description:
    This program is a solution to Exercise 2-9 from The C Programming Language,
    2nd Edition, by Brian kernighan and Dennis Ritchie.

    The task is to write function bitcount(x) that returns the number of 1-bits
    in its integer argument using the function x &= (x-1).

Example:
    The unsigned integer 90 will be stored in binary as 01011010. Calling bitcount(13)
    should return 4. It does this by counting the number of times a bitwise AND
    between a number and one less than itself is needed to reach 0. The first iteration
    will compare 01011010 and 01011001, giving the result 01011000. This counts the
    number of 1-bits because the bitwise AND will remove the right most 1-bit.
*/

#include <stdio.h>
#include "bit_tools.h"

int bitcount(unsigned x) {
    int b;

    printf("Binary: ");
    print_binary_byte(x);
    printf("\n");
    
    for (b = 0; x != 0; x &= (x-1)) {
        b++;
        
        printf("Value: ");
        print_binary_byte(x);
        printf(" \tBitwise AND with: ");
        print_binary_byte(x-1);
        printf("\tResult: ");
        print_binary_byte(x & (x-1));
        printf("\tCounter: %d\n", b);
    }

    printf("Value: ");
    print_binary_byte(x);
    printf(" \tFinal count: %d\n", b);
    
    return b;
}

void main() {
    unsigned input = 91;
    printf("Input: %d\n", input);
    printf("The bitcount for %d is %d\n\n", input, bitcount(input));

    input = 130;
    printf("Input: %d\n", input);
    printf("The bitcount for %d is %d\n\n", input, bitcount(input));

    input = 255;
    printf("Input: %d\n", input);
    printf("The bitcount for %d is %d\n\n", input, bitcount(input));
}