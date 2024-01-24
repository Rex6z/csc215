#include <stdio.h>

struct student
{
    int r_no;
    char name[20];
    char course[20];
    int fees;
};

int main(){
    struct student stud1, *ptr_stud1;
    ptr_stud1 = &stud1;
    printf("\n Enter the details of the student: ");

    printf("\n Enter the Name: ");
    fgets(ptr_stud1->name, 100, stdin);

    printf("\n Enter the Course: ");
    fgets(ptr_stud1->course, 100, stdin);


    printf("\n Enter the student ID: ");
    scanf("%d", &ptr_stud1->r_no);

    printf("\n Enter the Fees: ");
    scanf("%d", &ptr_stud1->fees);


    printf("\n DETAILS OF THE STUDENT");
    printf("\n STUDENT ID = %d", ptr_stud1->r_no);
    printf("\n NAME = %s", ptr_stud1->name);
    printf("\n COURSE = %s", ptr_stud1->course);
    printf("\n FEES = %d", ptr_stud1->fees);
    return 0;
}