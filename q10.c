// 10. Write a program in C to Find the Frequency of Characters.

#include <stdio.h>

#define MAX_SIZE 100

void findFrequency(char *str);

int main()
{
    char str[MAX_SIZE];

    printf("Enter a string: ");
    fgets(str, MAX_SIZE, stdin);

    findFrequency(str);

    return 0;
}

void findFrequency(char *str)
{
    int frequency[256] = {0}; // Array to store the frequency of each character
    int i;

    // Calculate the frequency of each character
    for (i = 0; str[i] != '\0'; i++)
    {
        frequency[str[i]]++;
    }

    // Print the frequency of each character
    printf("Frequency of characters in the string:\n");
    for (i = 0; i < 256; i++)
    {
        if (frequency[i] != 0)
        {
            printf("%c: %d\n", i, frequency[i]);
        }
    }
}
