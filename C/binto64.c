#include <stdio.h>
#include <stdlib.h>

char input[5]="abcde";
char output[sizeof(input)]="";

int convert(char var){
    for(int i=1; i<sizeof(input); i++){
        output[i]=input[i];
        printf("%i\n", output[i]);
    }
    return 0;
}

void main(){
    printf("1\n");
    convert(*input);
    printf("%s", output);
}