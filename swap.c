#include<stdio.h>
int swap(int*,int*); //declare function
void main()
{
    int a,b;
    a=4;
    b=7;

    printf("the value of a =%d and b=%d\n",a,b);
    swap(&a,&b);

    printf("the swaped value of a=%d and b=%d\n",a,b);
}
int swap(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
  
}