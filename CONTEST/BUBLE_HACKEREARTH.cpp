#include<stdio.h>
int sort(int arr[], int n)
{
	int i,count,a,j;
	/*for(i=0; i<n; i++)
	{
		for(j=1; j<=n; j++){
		if(arr[i]>arr[i+1])
		{
			temp = arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = temp;
			count++;
		}
	}
	}*/
	for (count=0;count<n-1;++count)
	{	for (i=count+1;i<n;++i)
		{
			if (arr[count]>arr[i])
			{	a=arr[count];
				arr[count]=arr[i];
				arr[i]=a;
			}
		}       
	}
	return count;
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	int fin = sort(a,n);
	printf("%d",fin);
return 0;	
}
