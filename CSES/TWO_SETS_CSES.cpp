#include<stdio.h>
#include<math.h>

int main()
{
	int n,i,sum=0,res=0;
	scanf("%d",&n);
	int comp = n*(n+1)/4;
	for(i=0; i<n; i++)
	{
		int arr[1000], arr2[1000];
	sum+=arr[i];
	res+=arr2[n-i];
		if(sum==comp && res==comp)
		{
			printf("Yes");
		}
		else
		{
			printf("no");
		}
	}
	return 0;
	
}
