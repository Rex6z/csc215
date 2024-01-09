#include <stdio.h>
#include <string.h>

// Get string length
int acc_strlen(char *str){
    int i;
    for (i = 0; str[i] != '\0'; i++) {}
    return i;
}

// Makes lowercase letters uppercase
// Not working, returns null
char* acc_low2up(char *str){
    char upper_str[100];
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            upper_str[i] = str[i] - 32;
        else
            upper_str[i] = str[i];
    }

    upper_str[i] = '\0';
    return upper_str;
}

// Add Source_Str to the end of Dest_Str
char* acc_strcat(char *Dest_Str, const char *Source_Str) {
    int i;

    for (i = 0; Dest_Str[i] != '\0'; i++){}
    for (int j = 0; Source_Str[j] != '\0'; j++){
        Dest_Str[i] = Source_Str[j];
        i++;
    }
    
    Dest_Str[i] = '\0';
    return Dest_Str;
}

// Returns 1 if str1 is greater, -1 if str2 is greater, and 0 if they are the same
int acc_strcmp(const char *str1, const char *str2) {
    int len1 = strlen(str1), len2 = strlen(str2);

    for (int i = 0; i < len1 && i < len2; i++) {
        if (str1[i] != str2[i]) {
            if (str1[i] > str2[i]) {
                return 1;
            } else {
                return -1;
            }
        }
    }

    if (len1 == len2) {
        return 0;
    } else if (len1 > len2) {
        return 1;
    } else {
        return -1;
    }
}

// Reverse the string
char* acc_strrev(char *str) {
    char temp;
    int i = 0;

    for (int j = strlen(str) - 1; j > 0; j--) {
        temp = str[j];
        str[j] = str[i];
        str[i] = temp;
        i++;
    }
    return str;
}

// Outputs the substring starting at m that is n long
// Not working, returns null
char* acc_strextr(const char *str, int m, int n) {
    char substr[100];
    int j = 0;

    for (int i = m; str[i] != '\0' && n > 0; i++) {
        substr[j] = str[i];
        j++;
        n--;
    }
    substr[j] = '\0';
    return substr;
}

// Inserts str into text at position pos
// Not working, returns null
char* acc_strinsrt(const char *text, const char *str, int pos) {
    int j = 0;
    char ins_text[100];
    
    for (int i = 0; text[i] != '\0'; i++) {
        if (i == pos){
            for (int k = 0; text[k] != '\0'; k++) {
                ins_text[j] = str[k];
                j++;
            }
        } else {
            ins_text[j] = str[i];
            j++;
        }
    }

    ins_text[j] = '\0';
    return ins_text;
}

// Deletes str from text
// Textbook starts with new_text but then swiches to new_str without defining it
// Not working, returns null
char* acc_delsub(const char *text, const char *str) {
    char new_text[100];
    int j,k,n = 0,copy_loop = 0;

    for (int i = 0; text[i] != '\0'; i++) {
        k = i;
        for (j = 0; text[k] == str[j] && str[j] != '\0'; j++)
            k++;
        if (str[j] == '\0')
            copy_loop = k;
        new_text[n] = text[copy_loop];
        copy_loop++;
        n++;
    }

    new_text[n] = '\0';
    return new_text;
}

// Replace pat with rep_pat in str
// Not working, returns null
char* acc_strrplc(const char *str, const char *pat, const char *rep_pat){
    char new_str[100];
    int i, j, k, n = 0, copy_loop = 0, rep_index = 0;

    for (i = 0; str[i] != '\0'; i++){
        k = 0;
        for (j = 0; str[k] == pat[j] && pat[j] != '\0'; j++)
            k++;
        if (pat[j] == '\0') {
            copy_loop = k;
            while (rep_pat[rep_index] != '\0') {
                new_str[n] = rep_pat[rep_index];
                rep_index++;
                n++;
            }
        }
        new_str[n] = str[copy_loop];
        copy_loop++;
        n++;
    }

    new_str[n] = '\0';
    return new_str;
}