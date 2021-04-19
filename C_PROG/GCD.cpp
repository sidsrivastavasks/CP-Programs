#include<stdio.h>

int GCD(int a, int b)
{
	int dividend = a>=b ? a:b;
	int divisor = a<=b ? a:b;
	while(divisor!=0)
	{
		int remainder = dividend%divisor;
		dividend = divisor;
		divisor = remainder;	
	}
	return dividend;
}

int main()
{
	while(1)
	{
	int a,b,c;
	scanf("%d%d",&a,&b);
	int res = 0;
	res = GCD(a,b);
	printf("%d\n",res);
}
	
	return 0;
}
