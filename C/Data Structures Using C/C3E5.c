/*
Write a program to compute the sum and mean of 
the elements of a two-dimensional array
*/

#include <stdio.h>

// Libraries needed for random scores
#include <stdlib.h>
#include <time.h>

int array[10][10];
int sum = 0;
int rows = 0;
int columns = 0;

void main(){
    // Set the random number seed based on the time so it is different each time you run it
    srand(time(NULL));
    
    // Make random array and display it
    for (int x = 0; x < 10; x++) {
        for (int y = 0; y < 10; y++) {
            array[x][y] = rand()%100+1;
            printf("%2d\t", array[x][y]);
        }
        printf("\n");
    }

    // Find size of array
    for(rows = 0; array[rows][0]!='\0'; rows++){}
    for(columns = 0; array[rows-1][columns]!='\0'; columns++){}

    // Calculate sum
    for (int x = 0; x < rows; x++) {
        for (int y = 0; y < columns; y++) {
            sum += array[x][y];
        }
    }

    // Print outputs
    printf("\nSum: %d\nMean: %0.2f", sum, (double)sum/(rows*columns));
}