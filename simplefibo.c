#include<stdio.h>
void main()
{
    int n,n1=0,n2=1,n3,i;

    printf("enter the number :");
    scanf("%d",&n);
    printf("the fibonacci series are :");
    printf("%d %d ",0,1);
    for(i=2;i<n;i++)
    {
        n3=n1+n2;
        
        n1=n2;
        n2=n3;
        printf("%d ",n3);
    }
}