#include<stdio.h>

int main()
{
	int row, i,j;
	printf("row:");
	scanf("%d",&row);
	
	for(i=1; i<=row; i++)
	{
		for(j=row; j<=i; j++)
		{
			printf("Hi");
		}
		printf("\n");
	}
	return 0;
}
