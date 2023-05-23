// 9. Write a C program to sort a string array in ascending order.

#include <stdio.h>
#include <string.h>

void sortStringArray(char array[][20], int size) {
    int i, j;
    char temp[20];
    
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (strcmp(array[j], array[j + 1]) > 0) {
                // Swap the strings
                strcpy(temp, array[j]);
                strcpy(array[j], array[j + 1]);
                strcpy(array[j + 1], temp);
            }
        }
    }
}

int main() {
    char strings[][20] = {"apple", "banana", "cherry", "date", "fig"};
    int size = sizeof(strings) / sizeof(strings[0]);
    int i;
    
    printf("Before sorting:\n");
    for (i = 0; i < size; i++) {
        printf("%s\n", strings[i]);
    }
    
    sortStringArray(strings, size);
    
    printf("\nAfter sorting:\n");
    for (i = 0; i < size; i++) {
        printf("%s\n", strings[i]);
    }
    
    return 0;
}
