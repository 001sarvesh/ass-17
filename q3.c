// 3. Write a program to count vowels in a given string

#include <stdio.h>
#include <string.h>
int main()
{
    char str[40], c;
    int i, count = 0;

    printf("Enter the String: ");
    scanf("%s", &str);

    for (i = 0; str[i]; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            count++;
        }
    }

    printf("No of vowels in the string is %d ", count);

    return 0;
}
