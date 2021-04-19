#include<stdio.h>
#include<math.h>
int main()
{
	long long int t,n,m,res;
	scanf("%lld",&t);
	while(t--)
	{
		res = 0;
		scanf("%lld%lld",&n,&m);
		res = n*m;
		if(res%2==0)
		{
			printf("%lld\n",(res/2));
		}
		else
		{
			printf("%lld\n",((res+1)/2));
		}
	}
	return 0;
}
