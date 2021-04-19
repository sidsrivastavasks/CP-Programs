#include<stdio.h>

int main()
{
	int i,j,n,k=0;
	printf("ENTER THE NUMBER OF ROW: ");
	scanf("%d", &n);
	
	 for(i=1; i<=n; i++)
	 {
	 	(i<=(n+1)/2)? k++: k--;
	 	for(j=1; j<=i; j++)
	 	{
	 		if(j<=k)
	 		{
	 			printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	 }
}
