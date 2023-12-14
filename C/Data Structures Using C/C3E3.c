/*
Write a program to interchange the second element 
with the second last element
*/

#include <stdio.h>

// Libraries needed for random scores
#include <stdlib.h>
#include <time.h>

int array[10];
int length;
int temp;

void main(){
    // Set the random number seed based on the time so it is different each time you run it
    srand(time(NULL));

    // Create random array of numbers
    for (int i = 0; i < 10; i++)
        array[i] = rand()%100+1;

    // Find array length and print initial array
    for(length = 0; array[length]!='\0'; length++)
        printf("%2d\t", array[length]);

    // Swap second with second to last
    temp = array[1];
    array[1] = array[length-2];
    array[length-2] = temp;

    // New line
    printf("\n");

    // Print new array
    for(int i = 0; i < length; i++)
        printf("%2d\t", array[i]);
}