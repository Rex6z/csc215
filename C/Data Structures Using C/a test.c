// Temmporary file to test if acc_strinsrt.h work

#include <stdio.h>
#include <string.h>
#include "acc_strinsrt.h"

void main(){
    char str1[100]="Hello";
    char str2[100]="el";
    char str3[100]="ap";


    printf("%s", acc_strrplc(str1, str2, str3));
}