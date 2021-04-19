#include<stdio.h>

int main()
{
	long long int n1,n2;
	scanf("%lld%lld",&n1,&n2);
	long long int i= (n1>n2)? n1: n2;
	if(i%n1==0 && i%n2==0)
	{
		printf("%lld", i);
	}
	else if(n1%2!=0 && n2%2==0 || n1%2==0 && n2%2!= 0)
	{
		if(n1-n2==1 || n2-n1== 1)
		printf("%lld", (n1*n2));
		else
		{
			printf("%lld", (n1*n2)/3);
		}  
	}
	else if(n1%2!=0 && n2%2!=0)
	{
		printf("%lld", n1*n2);
	}
	else if(n1%2==0 && n2%2==0)
	{
		printf("%lld", (n1*n2)/2);
	}
	return 0;
	
}
