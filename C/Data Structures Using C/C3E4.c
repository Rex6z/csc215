/*
Write a program that calculates the sum of squares
of the elements
*/

#include <stdio.h>

// Libraries needed for random scores
#include <stdlib.h>
#include <time.h>

int array[11];
int length;
int total;
int temp;

void main(){
    // Set the random number seed based on the time so it is different each time you run it
    srand(time(NULL));

    // Create random array of numbers
    for (int i = 0; i < 10; i++)
        array[i] = rand()%100+1;

    // Find array length and print initial array
    printf("Array:\n");
    for(length = 0; array[length]!='\0'; length++)
        printf("%5d\t", array[length]);

    // Find total and print the squares
    printf("\nSquares:\n");
    for(int i = 0; i < length; i++){
        temp = pow(array[i], 2);
        total += temp;
        printf("%5d\t", temp);
    }

    // Print total
    printf("\nTotal: %d", total);
}