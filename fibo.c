#include<stdio.h>
int fibo(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return fibo(n-1)+fibo(n-2);
}
void main()
{
    int i,num;

    printf("enter the n value :");
    scanf("%d",&num);

    printf("the fibonacci series are : ");
    for(i=0;i<num;i++)
        printf("%d ",fibo(i));
}

