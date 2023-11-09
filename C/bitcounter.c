/*
x &= (x-1)  removes the last bit because if you have a number such as 1101 (13) it will set x to the result of a bitwise and with 1100 (12) giving the result 1100 (12)
If we do this again, we set x to 1100 (12) & 1011 (11) which gives 1000
As you can see, this removes the last bit with the value of '1'
*/

// Use the normal library
#include <stdio.h>

// Main part of the program
void main(){
    // declare input varible
    unsigned input;
    
    // loop for easier demonstration
    while(1==1){
        // user input for easier demonstration
        scanf("%d", &input);
        
        // print output with easier to read format
        printf("The bitcount for %d is %d\n\n", input, bitcount(input));
    }
}

// bitcount function with unsigned input
int bitcount(unsigned x){
    // declare counter variable
    int b;
    
    // count each 1 in the input (binary)
    for (b = 0; x != 0; x &= (x-1))
        b++;
    
    // return the total
    return b;
}

//original version
/*
int bitcount(unsigned x){
    int b;
    for (b = 0; x != 0; x >>= 1)
        if (x & 01)
            b++;
    return b;
}
*/