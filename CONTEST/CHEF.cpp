#include<stdio.h>
#include<math.h>
int sol(int *ch[],int k,int a)
{

	int min = *ch[0];
	int j,d=0,sum = 0; 
	for(j=1; j<k; j++)
	{
		if(min>*ch[j])
		{
			min = *ch[j];
			d = j;
		}
	}
	
	if(a<=min)
	{
		
	sum = min;
	*ch[d] = min;
	
	}
	
	else if(a>min)
	{
		
		sum = a;
		*ch[d] = a;
	
	}
	return sum;
}
int main()
{
	int n,k,i,j,min,e;
	
	scanf("%d%d",&n,&k);
	int a[n],t[n],c[n],res[n],ch[n];
	
	
	for(i=0; i<n; i++)
	{
		
		scanf("%d",&a[i]);
	
	}
	
	for(i=0; i<n; i++)
	{
		
		scanf("%d",&t[i]);
	
	}
	
	for(i=0; i<n; i++)
	{
		
		scanf("%d",&c[i]);
	
	}
	
	for(i=0; i<k; i++)
	{
		
		res[i]=a[i];
		ch[i] = a[i]+t[i];
	
	}	
	
	if(k>=n)
	{
		
		for(i=0; i<k; i++)
		{
			
			printf("%d",res[i]);
		
		}
	
	}
	
	else
	{
		
		for(i=k+1; i<=n; i++)
		{
			
			e = a[i];
			res[i] = sol(&ch,k,e);			
		
		}
		
		for(i=0; i<n; i++)
		{
			
			printf("%d ",res[i]);	
		
		}	
	
	}
	
	return 0;
}
