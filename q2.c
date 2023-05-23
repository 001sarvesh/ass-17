// 2. Write a program to count the occurrence of a given character in a given string.


#include <stdio.h>
#include <string.h>
 
int main()
{
    char str[30],c;  
    int i,count=0;
 
    printf("Enter  the string : ");
    gets(str);
    printf("Enter character to be searched: ");
    c=getchar();
    
    for(i=0;str[i];i++)  
    {
    	if(str[i]==c)
    	{
          count++;
		}
 	}
     
	printf("character '%c' occurs %d times \n ",c,count);
 
 	 
     
    return 0;
}