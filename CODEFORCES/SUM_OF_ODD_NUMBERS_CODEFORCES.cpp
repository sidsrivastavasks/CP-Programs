#include<stdio.h>
#include<math.h>
int main()
{
	long long int t,a,b,i,d=1;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld%lld",&a,&b);
		if(a%2==b%2 && b*b<=a)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}
