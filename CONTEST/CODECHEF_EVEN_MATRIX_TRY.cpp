#include<stdio.h>
long long int mat[1001][1001];
int main()
{
	long long int t,i,j,n,k;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		k = 1;
		for(i=0; i<n; i++)
		{
			for(j=0; j<n; j++)
			{
				mat[i][j] = k;
				k++;	
			}
		}
		
		for(i=0; i<n; i++)
		{
			if(i%2==0)
			{
				for(j=0; j<n; j++)
				{
					printf("%lld ",mat[i][j]);
				}
			printf("\n");
			}
			else
			{
				for(j=n-1; j>=0; j--)
				{
					printf("%lld ",mat[i][j]);
				}
			printf("\n");	
			}
		}
	}
	return 0;
}
