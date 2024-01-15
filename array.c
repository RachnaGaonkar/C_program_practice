#include<stdio.h>
void main()
{
    int a[2][2],b[2][2],sum[2][2];
    int i,j;
    printf("enter value of a :\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);

        }
        
    }
     printf("enter value of b :\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
       
        }
         
    }
     // sum of array 
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            sum[i][j]=a[i][j]*b[i][j];

        }
    }
    printf("the sum of array a and b is:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",sum[i][j]);

        }
        printf("\n");
    }

}