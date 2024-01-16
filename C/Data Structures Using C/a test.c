// Temmporary file to test if acc_strinsrt.h work

#include <stdio.h>
#include <string.h>
#include "acc_strinsrt.h"

void main(){
    char str1[100]="Hello";
    char str2[100]="el";
    char str3[100]="ap";
    char array[3][3]={"abc","ghi","def"};

    printf("%s", acc_shortstrs(*array, 3));
}