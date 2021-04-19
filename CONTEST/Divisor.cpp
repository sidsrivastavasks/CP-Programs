#include<stdio.h>
#include<math.h>

int main()
{
	long long int t,i,j,n,k;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld%lld",&n,&k);
		int sum = n;
		for(i=0; i<k; i++)
		{
			if(sum%2==0)
			{
			sum+=2;
			}
			else
			{
				for(j=3; j<=n; j++)
				{
					if(n%j==0)
					{
					sum+=j;
					break;
					}
				}
			}
		}
		printf("%lld",sum);
	}
	return 0;
}
