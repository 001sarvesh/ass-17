// 6. Write a program to reverse a string.

#include <stdio.h>
#include <string.h>

 
int main()
{
    char s[100];  
  
    printf("Enter  the string : ");
    gets(s);
    
    strrev(s);
    printf("string in reverse case = %s\n",s);

    return 0;
}