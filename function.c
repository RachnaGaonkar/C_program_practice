#include<stdio.h>
int fact(int n)
{
    if(n>1)
    {
         return n*fact(n-1);
    }
    else{
       return 1;
    }
    
}

void main()
{
    int n;

    printf("enter no.:");
    scanf("%d",&n);

    printf("the factorial of %d is :%d ",n,fact(n));
}
