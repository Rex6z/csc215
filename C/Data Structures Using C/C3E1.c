/*
Consider an array MARKS[20][5] which stores the 
marks obtained by 20 students in 5 subjects. Now 
write a program to
(a) find the average marks obtained in each 
subject.
(b) find the average marks obtained by every 
student.
(c) find the number of students who have scored 
below 50 in their average.
(d) display the scores obtained by every student.
*/

#include <stdio.h>

// Libraries needed for random scores
#include <stdlib.h>
#include <time.h>

// Define the scores list
int MARKS[20][5];

void main(){
    // Set the random number seed based on the time so it is different each time you run it
    srand(time(NULL));
    
    // Make the scores list random
    for (int x = 0; x < 20; x++) {
        for (int y = 0; y < 5; y++) {
            MARKS[x][y] = rand()%100+1;
        }
    }
    
    printf("Subject averages\n");
    subjectavg();
    printf("\nStudent averages\n");
    studentavg();
    printf("\nAll scores");
    printall();
}

void subjectavg() {
    int total;
    for (int y = 0; y < 5; y++) {
        total = 0;
        for (int x = 0; x < 20; x++) {
            total += MARKS[x][y];
        }
        printf("Subject %d: %d\n", y+1, total/20);
    }
}

void studentavg(){
    int total;
    int count = 0;
    for (int x = 0; x < 20; x++) {
        total = 0;
        for (int y = 0; y < 5; y++) {
            total += MARKS[x][y];
        }
        total /= 5;
        if (total < 50)
            count++;
        printf("Student %d: %d\n", x+1, total);
    }
    printf("\nNumber of students below 50: %d\n", count);
}

void printall(){
    for (int x = 0; x < 20; x++) {
        printf("\nStudent %d: ", x+1);
        for (int y = 0; y < 5; y++) {
            printf("%d", MARKS[x][y]);
            if(y < 4)
                printf(", ");
        }
    }
}