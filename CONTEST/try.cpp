#include<stdio.h>
#include<math.h>
int main()
{
	long long int a,b,c,d,e,t;
	scanf("%lld",&t);
	while(t--)
	{
		c=0;
		scanf("%lld%lld%lld%lld",&a,&b,&d,&e);
		long long int res =  ( ( ( ( a ^ b ) || c ) ^ d ) || e );
		printf("%lld",res);
	}
}
