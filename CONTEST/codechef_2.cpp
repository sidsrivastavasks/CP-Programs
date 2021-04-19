#include<stdio.h>
#include<math.h>
int main()
{
	long long int t,n,count,i,res,fin;
	scanf("%lld",&t);
	while(t--)
	{
		res = 0;
		fin = 0;
		count = 0;
		scanf("%lld",&n);
		long long int a[n],b[n];
		for(i=1; i<=n; i++)
		{
			scanf("%lld",&a[i]);
		}
		for(i=1; i<=n; i++)
		{
			scanf("%lld",&b[i]);
			if(a[i]==b[i])
			{
				count+=i;
			}
		}
	}
	return 0;
}
