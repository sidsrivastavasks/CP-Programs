#include<stdio.h>
#include<math.h>
int main()
{
	long long int t,k,n,a=0,i;
	scanf("%lld",&t);
	while(t--)
	{
		a=0;
		scanf("%lld%lld",&k,&n);
		if(k==n)
		{
			a = k+n;
			printf("%lld\n",(a*a));
		}
		else if(k!=1 && n!=1)
		{
			i = (k>n)? n : k;
			a = i+i;
			printf("%lld\n",(a*a));
		}
		else 
		{
			i = (k>n)? k : n;
			printf("%lld\n",(i*i));
		}
	}
	return 0;
}
