#include<stdio.h>
#include<math.h>
#define M 10
long long int power(long long int n )
{
	long long int y;
	if(n==0)
	return 1;
	else if(n%2==0)
	{
		y= power(n/2);
		return (y*y)%M;
	}
	else
	{
		return ((2%M)*(power(n-1)))%M;
	}
}
int main()
{
	long long int n;
	scanf("%lld",&n);
	long long int res = power(n);
	printf("%lld",res);
	return 0;
}
