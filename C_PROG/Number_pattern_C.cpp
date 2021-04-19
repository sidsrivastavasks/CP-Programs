#include<stdio.h>
#include<math.h>

int main()
{
	long long int n,m,p,q,i,j;
	scanf("%lld%lld",&n,&m);	
	long long int matrix[n][m];
	scanf("%lld%lld",&p,&q);
	long long int matrix2[p][q];
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			long long int max = (abs(i-p)>abs(j-q))? abs(i-p) : abs(j-q);
			matrix2[i][j] = max;
		}
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			printf("%lld %lld",matrix[i][j]);
		}
	}
	return 0;
	
}
