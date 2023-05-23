// 5. Write a program to convert a given string into lowercase
#include <stdio.h>
#include <string.h>

 
int main()
{
    char s[100];  
  
    printf("Enter  the string : ");
    gets(s);
    
	strupr(s);         

    printf("string in uppercase ='%s'\n",s);
    
    return 0;
    
}