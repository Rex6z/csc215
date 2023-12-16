/*
Write a program to count the total number of non-zero elements in a two-dimensional array
*/

#include <stdio.h>

// Libraries needed for random scores
#include <stdlib.h>
#include <time.h>

int array[10][10];
int count = 0;

void main(){
    // Set the random number seed based on the time so it is different each time you run it
    srand(time(NULL));
    
    // Make random array and display it
    for (int y = 0; y < 10; y++) {
        for (int x = 0; x < 10; x++) {
            array[x][y] = rand()%10;
            printf("%d ", array[x][y]);
        }
        printf("\n");
    }

    printf("\n");

    //Find array size
    int arrayy = sizeof(array) / sizeof(array[0]);
    int arrayx = sizeof(array[0]) / sizeof(array[0][0]);

    for (int y = 0; y < 10; y++)
        for (int x = 0; x < 10; x++)
            if(array[x][y] != 0)
                count++;
    printf("Number of non-zero elements: %d", count);
}