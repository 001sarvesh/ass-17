// 4. Write a program to convert a given string into uppercase

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int i;
//     char str[i];
//     printf("Enter the String:");
//     gets(str);

// for ( i = 0; str[i]!='\0'; i++)
// {
//     if (str[i]>='a' && str[i]<='z')
//     {
//         str[i] = str[i] - 32;
//     }
    
// }
// printf("The upperCase String is : %s", str);
//     return 0;
// }

#include <stdio.h>
#include <string.h>

 
int main()
{
    char s[100];  
  
    printf("Enter  the string in uppercase: ");
    fgets(s,100,stdin);
    
	strlwr(s);         

    printf("string in lowercase = %s\n",s);
    
    return 0;
    
}