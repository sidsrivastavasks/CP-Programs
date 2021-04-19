#include<stdio.h>

int main()
{
	long long int t,a,b;
	scanf("%lld",&t);
	long long int res;
	while(t--)
	{
		long long int res = 0;
		scanf("%lld%lld",&a,&b);
		if(a==b)
		{
			res = (a+b)/3;
		}	
		else if(a>=b && b!=0)
		{
			if(a%2==0)
			{res = ((a/2) + (b/b));
			
			}
			else
			res = ((a/2) + (b/b))-1;
		}
		else if(b>=a && a!=0)
		{
			if(b%2==0)
			{res = ((b/2) + (a/a));}
			
			else
			{res = ((b/2) + (a/a)) - 1;}
		}
		printf("%lld\n",res);
	}
	return 0;
}
