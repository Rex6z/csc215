// Write a program to count the number of vowels in a text.

#include <stdio.h>
#include <ctype.h>

void main(){
    // Set variables
    char input[1000];
    int count = 0;
    
    // Print prompt and read response
    printf("Input: ");
    scanf("%s", &input);
    
    // Go through every character in input
    for (int i = 0; input[i] != '\0'; ++i) {
        // Make lowercase
        char c = tolower(input[i]);;
        
        // Check if vowel
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }
    printf("%d", count);
}