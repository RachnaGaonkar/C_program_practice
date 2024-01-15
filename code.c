#include<stdio.h>
void main()
{
    int arr[5][5],i,j,k,l,col,row;
    printf("enter how many rows & cols:");
    scanf("%d\t%d",&row,&col);
    

    for(i=0;i<row;i++)
    {
         for(j=0;j<col;j++)
         {
             printf("enter elements %d :",j+1);
             scanf("%d",&arr[i][j]);

         }
          
    }
    for(k=0;k<row;k++)
    {
         for(l=0;l<col;l++)
         {
             printf("%d\t",arr[k][l]);
         }      
          printf("\n");
     }
}