#include<stdio.h>
#include<math.h>

int main()
{   
    long long int n,i,j;
    scanf("%lld",&n);
	int arr[n];
	for(i=0; i<n; i++)
	{
		scanf("%lld",&arr[i]);
		int mult=1;
		for(j=1; j<=arr[i]; j++)
		{
			mult= mult*j;
		}
		
	printf("%lld\n",mult);
	}
	
	return 0;
}
