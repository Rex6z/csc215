// Write a program to read a floating point number. Display the rightmost digit of the integral part of the number

#include <stdio.h>

void main(){
    // Set variables
    float input;
    printf("Float: ");
    scanf("%f", &input);

    // Truncate the number
    int trunc = (int) input;
    
    // Read the rightmost bit
    int right = trunc % 10;
    
    // Print output
    printf("%d\n", right);
}