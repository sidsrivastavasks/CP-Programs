#include<stdio.h>

int main()
{
	int i,j,row;
	printf("ENTER THE NUMBER OF ROWS: ");
	scanf("%d",&row);
	for(i=1; i<=row; i++)
	{
		for(j=row; j<i; j++)
		{
			printf("*");
		}
	printf("\n");
	}
	return 0;
}
