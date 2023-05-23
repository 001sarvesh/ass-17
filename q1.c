// 1. Write a program to calculate the length of the string. (without using built-in method)
#include <stdio.h>
#include <string.h>
int main()
{
   char str[10];
   int i,count;
   count = 0;
   printf("Enter the string :");
   gets(str);
   for ( i = 0; str[i]!='\0'; i++)
   {
    count++;
   }
    printf("Length of String is %d ", count);
   
    
    return 0;
}