#include<stdio.h>
int power(int x,int y)
{
     int i, result = 1;

    for(i=0;i<y;i++)
    {
        result = result*x;
    }

    return result;
}

void main()
{
    int x,y,result;

    printf("Enter x value :");
    scanf("%d",&x);

    printf("Enter y value :");
    scanf("%d",&y);

    result = power(x,y);

    printf("%d^%d = %d",x,y,result);
}