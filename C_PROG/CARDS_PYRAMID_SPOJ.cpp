#include<stdio.h>

int main()
{
	long long int i,t,n,s,res;
	scanf("%lld",&t);
	for(i=0; i<t; i++)
	{
		scanf("%lld",&n);
		s = (2*n*(n+1)/2) + (n*(n-1)/2);
		res = s%1000007;		
		printf("%lld\n",res);
	}
	return 0;
}
