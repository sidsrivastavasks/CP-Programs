#include<stdio.h>

int main()
{
	int i,j,n;
	char k;
	printf("ENTER THE NUMBER OF ROWS: ");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
	{
		k='A';
		for(j=1; j<=2*n-1; j++)
		{
			if(j<=n-i+1 || j>=n+i-1)
			{
				printf("%c",k);
				k++;
				
			}
			else
			{
			   printf(" ");
			}
		}
		printf("\n");
	}
	
}
