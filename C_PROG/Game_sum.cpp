#include<stdio.h>

int sort(int arr[], int n)
{
	int i,j,a;
	for (i=0; i<n-1;++i)
	{	
		for (j=i+1;j<n;++j)
		{
			if (arr[i]>arr[j])
			{	a=arr[i];
				arr[i]=arr[j];
				arr[j]=a;
			}
		}
	}
	return arr[n];
}

int sum(int arr[], int n)
{
	int i,add=0;
	for(i=0; i<2*n-1; i++)
	{
		add+=arr[i];
	}
	return add;
}
int sum2(int n)
{
	int i,add2=0;
	for(i=1; i<=n; i++)
	{
	add2+=n;
	}
	return add2;
}

int main()
{
	int i,n,j,k,arr[1000];
	scanf("%d",&n);
	int res1= sum2(n);
	int t=2*n-1;
	for(i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0; i<n-1; i++)
	{
		scanf("%d",&arr[n+i]);
	}
	sort(arr,t);
	for(i=0; i<t; i++)
	{
		for(j=i+1; j<t; j++)
		{
			if(arr[i]==arr[j])
			{
				for(k=j; k<t; k++)
				{				
				arr[k]=arr[k+1];
				}
					t--;
					j--;
			}
		}
	}
	int res2= sum(arr,n);
	if(res1==res2)
	{
		printf("I bacame the guy");
	}
	else
	{
		printf("oh, my keyboard!");
	}
	return 0;
}
