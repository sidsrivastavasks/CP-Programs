#include<stdio.h>
#include<math.h>

int main()
{
	long long int n,i;
	scanf("%lld",&n);
	if(n<=3 && n>1)
	{
		printf("NO SOLUTION");
	}
	else 
	{
		for(i=1; i<=n; i++)
		{	
			if(i%2==0)
			{
				printf("%lld ",i);
			}
		}
		for(i=1; i<=n; i++)
		{	
			if(i%2!=0)
			{
				printf("%lld ",i);
			}
		}
	}
	return 0;
}
