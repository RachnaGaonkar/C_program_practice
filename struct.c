#include<stdio.h>
#include<string.h>
struct employee
{
    int id;
    char name[20];
}e1;
void main()
{
    e1.id=99;
    strcpy(e1.name,"rachana gaonkar");

    printf("employee 1 id:%d\n",e1.id);
    printf("employee 1 name:%s\n",e1.name);
}