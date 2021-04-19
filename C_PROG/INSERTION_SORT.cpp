#include<stdio.h>
#include<math.h>
int insert(int a[], int n)
{
	int i,value=0,hole=0,count=0;
	for(i=1; i<=n-1; i++)
	{
		value=a[i];
		hole=i;
		while(hole>0 && a[hole-1]>value)
		{
			a[hole]=a[hole-1];
			hole=hole-1;
			count++;
		}
		a[hole]=value;
		for(i=0; i<n; i++)
			{
				printf("%d ",a[i]);
			}
	}
	return a[n];
	return count;
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	insert(arr,n);
	for(i=0; i<n; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
