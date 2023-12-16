/*
Write a program that computes the sum of the 
elements that are stored on the main diagonal of 
a matrix using pointers
*/

#include <stdio.h>

// Libraries needed for random scores
#include <stdlib.h>
#include <time.h>

int array[10][10];
int sum = 0;

void main(){
    // Set the random number seed based on the time so it is different each time you run it
    srand(time(NULL));
    
    // Make random array and display it
    for (int x = 0; x < 10; x++) {
        for (int y = 0; y < 10; y++) {
            array[x][y] = rand()%100+1;
            printf("%3d ", array[x][y]);
        }
        printf("\n");
    }

    //Find array size
    int size = sizeof(array) / sizeof(array[0]);

    for(int i = 0; i < size; i++)
        sum += array[i][i];

    printf("\nSum of diagnal: %d", sum);
}