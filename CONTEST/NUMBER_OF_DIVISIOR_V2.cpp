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
	long long int n,k,t,i,sum,count,res;
	scanf("%lld",&t);
	while(t--)
	{
		sum = 0;count=0;res=0;
		scanf("%lld%lld",&n,&k);
		sum = (n/2)*(2 + (n-1));
		for(i=k; i<=n; i++)
		{
			if(i%k==0)
			{
				count+=i;
				res+= divisor(i,k);
			}
		}
		printf("%lld",((sum)));
	}
return 0;
}
