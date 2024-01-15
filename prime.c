#include<stdio.h>
void main()
{
    int n,i=2,flag=0;

    printf("enter the no: ");
    scanf("%d",&n);

    while(i<n)
    {
        if(n%i==0)
        {
            flag=1;
          }
        i++;
     }
    if(flag==0)
    {
        printf("it's a prime number.");
    }
    else{
        printf("its not a prime number.");
    }
}