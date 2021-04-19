#include<stdio.h>

 int main()
 {
 	int i,j,n;
 	printf("ENTER THE NUMBER OF ROWS: ");
 	scanf("%d",&n);
 	 for(i=1; i<=n; i++)
 	{
 	  for(j=1; j<=2*n-1; j++)
	   {
	   	printf("*");
	   }
	   printf("\n");	
	}
 }
