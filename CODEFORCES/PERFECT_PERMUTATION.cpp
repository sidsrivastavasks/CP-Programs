#include<stdio.h>
#include<math.h>

int main()
{
	int n,i,j;
	scanf("%d",&n);
	if(n%2!=0)
	{
		printf("-1");
	}
	else
	{
		int temp=0,arr[100];
		for(i=0; i<n; i++)
		{
			arr[i]=i+1;
		}
		for(i=0;i < n;i+=2)
    	{
        temp    = arr[i];
        arr[i]  = arr[i+1];
        arr[i+1]= temp;
    	}
		for(i=0; i<n; i++)
		{
		s
		printf("%d ",arr[i]);
		}
	}
	return 0;
}
