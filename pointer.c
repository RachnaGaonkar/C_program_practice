#include<stdio.h>
void main()
{
    int *p;
    int var=30;
    p=&var;
    printf("the adress of p variable is %x\n",p);
    printf("the value of p variable is %d\n",*p);
}