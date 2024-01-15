#include<stdio.h>
void main ()
{
    int fact=1, i, num;
    
    printf("Enter the number :");
    scanf("%d",&num);
     i=1;
    while(i<=num)
    {
        fact=fact*i;
        i++;
    }
    printf("the factriol of the given number is %d",fact);
}