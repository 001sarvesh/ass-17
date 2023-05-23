// 8. Write a program in C to copy one string to another string.

#include <stdio.h>

void stringCopy(char *source, char *destination) {
    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
}

int main() {
    char source[] = "Hello, World!";
    char destination[100];
    
    stringCopy(source, destination);
    
    printf("Source string: %s\n", source);
    printf("Copied string: %s\n", destination);
    
    return 0;
}

