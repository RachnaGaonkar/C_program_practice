#include<stdio.h>
#include<string.h>
void main()
{
    char str1[20],str2[20];

    printf("enter the 1st string:");
    gets(str1);
    printf("enter the 2nd string :");
    gets(str2);
    if(strcmp(str1,str2)==0)
    {
        printf("the strings are equal.");
    }
    else
    {
        printf("the strings are not equal.");
    }
}