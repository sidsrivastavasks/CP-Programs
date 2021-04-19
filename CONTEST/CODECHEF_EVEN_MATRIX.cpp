#include<stdio.h>
#include<math.h>
long long mat[1000][1000];

void print(long long int mat[1000][1000],long long int N) 
{ 
  long long int i,j; 
    for(i=0; i<N; i++)
		{
			if(i%2==0)
			{
				for(j=0; j<N; j++)
				{
					printf("%lld ",mat[i][j]);
				}
			printf("\n");
			}
			else
			{
				for(j=N-1; j>=0; j--)
				{
					printf("%lld ",mat[i][j]);
				}
			printf("\n");	
			}
		}
} 
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
		print(mat,n);
	}
	return 0;
}
