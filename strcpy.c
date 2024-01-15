#include<stdio.h>
#include<string.h>
void main()
{
    char str1[20],str2[20];

    printf("enter the string:");
    gets(str1);
    strcpy(str2,str1);
    printf("value in the second string is :%s",str2);
}