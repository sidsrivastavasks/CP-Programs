#include<stdio.h>
int main()
{
	int t,n,i,hole,value,count;
	scanf("%d",&t);
	while(t--){
	count = 0;
	hole = 0;
	value = 0;	
	scanf("%d",&n);
	int a[n];
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
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
	}
	printf("%d\n",count);
	}
	return 0;
}
