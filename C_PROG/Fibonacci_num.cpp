#include<stdio.h>
#include<math.h>

long long int function(long long int n)
{
	if(n==0)
	{
		return 0;
	}
	else if(n==1 || n==2)
	{
		return 1;
	}
	long long int res = function(n-1);
	long long int res2 = function(n-2);
	
return (res+res2);

}
int main()
{
	long long int i,n;
	scanf("%lld",&n);
	long long int final = function(n);
	printf("%lld",final);
	return 0;
}

