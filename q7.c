//  Write a program in C to count the total number of alphabets, digits and special 
// characters in a string.

#include <stdio.h>
#include <string.h>

void countCharacters(const char *str, int *alphabets, int *digits, int *special) {
    int i = 0;
    char c;
    *alphabets = 0;
    *digits = 0;
    *special = 0;
    
    while (str[i] != '\0') {
        c = str[i];
        
        if (isalpha(c)) {
            (*alphabets)++;
        } else if (isdigit(c)) {
            (*digits)++;
        } else {
            (*special)++;
        }
        
        i++;
    }
}

int main() {
    char str[100];
    int alphabets, digits, special;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    countCharacters(str, &alphabets, &digits, &special);
    
    printf("Alphabets: %d\n", alphabets);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", special);
    
    return 0;
}
