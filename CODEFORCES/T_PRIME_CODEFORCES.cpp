#include<stdio.h>
#include <stdbool.h> 
bool Is_prime(int n)
{
	int i;
	if(n=1) 
	return true;
	if(n<=3) 
	return true;
	
	if (n%2==0 || n%3==0) 
	return false;
	for(i=2; i*i<=n; i=i+1)
	if(n%i==0 || n%(i+2)==0)
	return false;
	
return true;
}
int main()
{
	long long int t,n,i,j;
	scanf("%I64d ",&t);
	for(i=0; i<t; i++)
	{
		long long int count = 0;
		scanf("%I64d",&n);
		if(n%2!=0)
		{
			printf("NO");	
		}
		else
		{
			
		}
	}
	return 0;
}
