#include<stdio.h>
int main()
{
	long long int t,n,k,i,sum,res,count;
	scanf("%lld",&t);
	while(t--)
	{
		res = 0; sum = 0; count = 0;
		scanf("%lld%lld",&n,&k);
		sum = (n/2)*(2 + (n-1));
		for(i=k; i<=n; i++)
		{
			if(i%k==0)
			{
				
			}
		}
		printf("%lld",((sum-count)+res)%1000000007);
	}
	return 0;
}
