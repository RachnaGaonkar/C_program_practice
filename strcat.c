#include<stdio.h>
#include<string.h>
void main()
{
    char str1[20],str2[20];

    printf("enter the 1st string :");
    gets(str1);
    printf("enter the 2nd string :");
    gets(str2);
    strcat(str1," ");
    strcat(str1,str2);
    printf("the value of string 1 is %s",str1);
}