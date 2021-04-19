#include<stdio.h>
#include<math.h>
long long power(long long n){

long long int i;
    if(n==0)return 1;
long long k=10;
for(i=0;i<n-1;i++){
    k = k*10;
}
return k;

}
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
			arr[j]= arr[j]*power(mult);
			count++;
			j++;
			}
			n/=10;
			mult++;
		}
			printf("\n%lld\n",count);
			for(p=0; p<count; p++)
			{
				printf("%lld ",arr[p]);
			}
	
	}
	return 0;
	
}
