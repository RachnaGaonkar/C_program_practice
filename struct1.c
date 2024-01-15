#include<stdio.h>

struct book
{
    char name[50];
    float price;
    int pages;
};
void main()
{
    int i,num;
    struct book b[5];

   // printf("entr the number of books you want to record:");
    // scanf("%d",&num);
   for(i=0;i<2;i++)
   {
        printf("enter the book name %d: ",i+1);
        gets(b[i].name); 
      

        printf("enter the price:");
        scanf("%f",&b[i].price);

        printf("enter the no. of pages:");
        scanf("%d",&b[i].pages);

        printf("\n");
   }
   printf("\nthe details of books:\n");
    for(i=0;i<2;i++)
   {
       
       puts(b[i].name);
       
        printf("\n price:%f",b[i].price);

        
        printf("\n pages: %d",b[i].pages);
   }
}