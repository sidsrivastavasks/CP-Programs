#include<stdio.h>

int main()
{
	int i,j,n,sp,a,k=0;
	printf("ENTER THE NUMBER OF ROWS: ");
	scanf("%d",&n);
	a=n;
	for(i=1; i<=n; i++) 
	{
		for(sp=1; sp<=n; sp++)
		{
			printf(" ");
		}
		a--;
		for(j=1; j<=n; j++)
		{
			if(j<=k)
			{
				printf(" ");
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
}
