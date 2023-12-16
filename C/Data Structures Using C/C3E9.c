/*
Write a program that computes the product of the 
elements that are stored on the diagonal above the 
main diagonal
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
    for (int y = 0; y < 10; y++) {
        for (int x = 0; x < 10; x++) {
            array[x][y] = rand()%100+1;
            printf("%3d ", array[x][y]);
        }
        printf("\n");
    }

    //Find array size
    int size = sizeof(array) / sizeof(array[0]);

    for(int i = 0; i < size-1; i++)
        sum += array[i+1][i];

    printf("\nSum of diagnal: %d", sum);
}