#include<stdio.h>
#include<string.h>
void main()
{
    char str[10];
    printf("enter the string :");
    gets(str);
    int len = strlen(str);
   printf("length of string is :%d",len);
}