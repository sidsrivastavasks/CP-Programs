#include<stdio.h>
#include<math.h>
long long int binarysearch(long long int a[],long long int n,long long int low,long long int high ,long long int k)
{
	while(low<=high)
	{
		long long int mid = ((high-low)/2 )+ low;
		if(a[mid]<k)
		{
			low = mid+1;
		}
		else if(a[mid]>k)
		{
			high = mid-1;
		}
		else
		{
			return mid;
		}
	}
return -1;
}
int main()
{
	long long int i,n,k,m,res;
	scanf("%lld",&n);
	long long int a[n];
	for(i=0; i<n; i++)
	{
		scanf("%lld",&a[i]);
	}
	scanf("%lld",&m);
	for(i=0; i<m; i++)
	{
		scanf("%lld",&k);
		long long int res = binarysearch(a,n,0,n-1,k);
		printf("%lld\n",res+1);
	}
	return 0;
}
