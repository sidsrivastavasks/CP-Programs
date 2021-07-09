#include<stdio.h>
#include<math.h>
int main()
{
	long long int i,p,n,k=0,dif;
	scanf("%lld%lld",&n,&p);
	long long int a[n];
	for(i=1; i<n; i++)
	{
		scanf("%lld",&a[i]);
		if(p>a[i])
		{
			k+= p-a[i];
		}
		else
		{
			p=a[i];
		}
	}
	
	printf("%lld",k);
return 0;	
}
