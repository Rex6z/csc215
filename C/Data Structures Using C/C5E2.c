// Write a program to read, display, add, and subtract two complex numbers

#include <stdio.h>

void main(){
    typedef struct complex{
        int real;
        int imag;
    }COMPLEX;
    COMPLEX c1, c2, sum_c, sub_c;
    int option;

    do{
        printf("\n******** Main Menu *********");
        printf("\n1. Read the complex numbers");
        printf("\n2. Display the complex numbers");
        printf("\n3. Add the complex numbers");
        printf("\n4. Subtract the complex numbers");
        printf("\n5. Exit");
        printf("\nEnter your option : ");
        scanf("%d", &option);

        switch(option){
            case 1:
                 printf("\nEnter the real and imaginary parts of first complex number : ");
                 scanf("%d %d", &c1.real, &c1.imag);
                 printf("\nEnter the real and imaginary parts of second complex number : ");
                 scanf("%d %d", &c2.real, &c2.imag);
                 break;
            case 2:
                printf("\nThe first complex number is : %d+%di", c1.real, c1.imag);
                printf("\nThe second complex number is : %d+%di", c2.real, c2.imag);
                break;
            case 3:
                sum_c.real = c1.real + c2.real;
                sum_c.imag = c1.imag + c2.imag;
                printf("\nThe sum of two complex numbers is : %d+%di", sum_c.real, sum_c.imag);
                break;
            case 4:
                sub_c.real = c1.real - c2.real;
                sub_c.imag = c1.imag - c2.imag;
                printf("\nThe difference between two complex numbers is : %d+%di", sub_c.real, sub_c.imag);
                break;
        }
    }while(option != 5);
}