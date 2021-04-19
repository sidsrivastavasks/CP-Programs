#include<stdio.h>
#include<string.h>
#include<math.h>
long long int factorial(long long int n)
{
	long long int i,sum = 1;
	for(i=1; i<=n; i++)
	{
		sum*=i;
	}
	return sum;
}
int main()
{
	long long int t,x,y,i,ans1=0,ans2=0,ans3=0,final=0;
	scanf("%lld",&t);
	for(i=0; i<t; i++)
	{
		scanf("%lld%lld",&x,&y);
		if(x>y)
		{
			printf("0");
		}
		else
		{
			ans1= factorial(x+1);
			ans2= factorial(y+1);
			ans3= factorial(y);
			final = (ans1/(ans2*ans3));
			printf("%lld",final);
		}
	}
}
