#include<stdio.h>
float cal(float,float);
void main()
{
    float a=2,b=5,c;

    c=cal(a,b);

    printf("the average is %f",c);
}

float cal(float x, float y)
{
   float c=(x+y)/2;
    return c;
}
  