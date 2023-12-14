/*
Write a program that reads an array of 100 
integers. Display all the pairs of elements whose 
sum is 50
*/

#include <stdio.h>

// Libraries needed for random scores
#include <stdlib.h>
#include <time.h>

int array[101];

void main(){
    // Set the random number seed based on the time so it is different each time you run it
    srand(time(NULL));
    
    // Create random array of numbers
    for (int i = 0; i < 100; i++) {
        array[i] = rand()%100+1;
    }

    for (int i = 0; i < 100; ++i) {
        for (int j = i + 1; j < 100; ++j) {
            if (array[i] + array[j] == 50)
                printf("%2d + %2d\n", array[i], array[j]);
        }
    }
}