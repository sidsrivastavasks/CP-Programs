#include<stdio.h>
#include<math.h>
long long int divisor(long long int n, long long int k)
{
	long long int m = n/k;
	if(m%k!=0)
	{
		return m;
	}
	else 
	{
		divisor(m,k);
	}
}
int main()
{
	long long int t,n,k,i;
	scanf("%lld",&t);
	while(t--)
	{
		long long int d=0,sum = 0,count = 0;
		scanf("%lld%lld",&n,&k);
		for(i=1; i<=n; i++)
		{
			if(i%k!=0)
			{
				sum+=i;
			}
			else
			{
				count+= divisor(i,k);
			}
		}
		printf("%lld\n",(sum+count)%1000000007);
	}
	return 0;
}
