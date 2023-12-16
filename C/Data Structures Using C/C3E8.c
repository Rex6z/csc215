/*
Write a program to add two 3 X 3 matrix using 
pointers
*/

#include <stdio.h>

// Libraries needed for random scores
#include <stdlib.h>
#include <time.h>

int array1[3][3];
int array2[3][3];
int output[3][3];

void main(){
    // Set the random number seed based on the time so it is different each time you run it
    srand(time(NULL));
    
    // Make two random arrays and display them
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            array1[x][y] = rand()%100+1;
            printf("%3d ", array1[x][y]);
        }
        printf("\t");
        for (int y = 0; y < 3; y++) {
            array2[x][y] = rand()%100+1;
            printf("%3d ", array2[x][y]);
        }
        printf("\n");
    }

    printf("\n");
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            output[x][y] = array1[x][y] + array2[x][y];
            printf("%3d ", output[x][y]);
        }
        printf("\n");
    }
}