// Write a program to read an integer. Display the value of that integer in decimal, octal, and hexadecimal notation.

#include <stdio.h>

void main(){
    // Set variables and read input
    int input;
    printf("Input: ");
    scanf("%d", &input);

    // Convert and print
    printf("Decimal: %d\n", input);
    printf("Octal: %o\n", input);
    printf("Hexadecimal: %x\n", input);
}