#include <stdio.h>
#include <conio.h>

typedef struct book_details
{
    int id;
    char name[50];
    char author[50];
    int price;
}book;

int main()
{   int n,i,j,name,id,price,author;
    book arr[100];
    printf("\nEnter no books :");scanf("%d",&n);
    for (j=0;j<n;j++)
    {   fflush(stdin);
        printf("\nBook #%d",j+1);
        printf("\nEnter  id :");
        scanf("%d",&arr[j].id);fflush(stdin);
        printf("\nEnter book name:");
        gets(arr[j].name);fflush(stdin);
        printf("\nEnter  author:");
        gets(arr[j].author);fflush(stdin);
        printf("\nEnter  price :");scanf("%d",&arr[j].price);
     }
     for (j=0;j<n;j++)
     {
         printf("\nBook Details #%d",j+1);
         printf("\nBook  Id: %d",arr[j].id);
         printf("\nBook  Name: %s",arr[j].name);
         printf("\nBook  Author: %s",arr[j].author);
         printf("\nBook  Price Rs: %d",arr[j].price);
         printf("\n");
     }
     return 0;
}
