#include<stdio.h>
#include<math.h>

int main()
{
	long long int t,i,n,p;
	long long int arr[1000];
	scanf("%lld",&t);
	for(i=0; i<t; i++)
	{
		long long int count=0,mult=0,j=0;
		scanf("%lld",&n);
		while(n>0)
		{
			arr[j]=(n%10);
			if(arr[j]!=0)
			{
			arr[j]= arr[j]*pow(10,mult);
			count++;
			j++;
			}
			n/=10;
			mult++;
		}
			printf("%lld\n",count);
			for(p=0; p<count; p++)
			{
				printf("%lld ",arr[p]);
			}
			printf("\n");
	
	}
	return 0;
	
}
