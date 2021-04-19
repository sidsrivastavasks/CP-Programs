#include<stdio.h>
#include<math.h>
int main()
{
	int t,x,i,n,sum,l,res,p,j,count;
	
	scanf("%d",&t);
	
	while(t--)
	{
	
		sum =0;
	
		res = 0;
	
		p = 0;
	
		l = 0;
		
		count = 0;
	
		scanf("%d%d",&n,&x);
	
		int a[n];
	
		for(i=0; i<n; i++)
	
		{
	
			scanf("%d",&a[i]);
	
			if(x<n && x>1)
			{	
	
				if(a[i]%2==0)
				{
	
					l = a[i];	
	
				}
				else
				{
					count++;
				}
	
			}
	
		}
	
		if(x==n)
		{
	
			for(i=0; i<n; i++)
			{
	
				sum+=a[i];
	
			}
		
		}
		
		else
		{
		
			for(i=0; i<x; i++)
			{
		
				for(j=0; j<n; j++)
				{
		
					if(a[j]%2!=0)
					{
		
						sum+=a[j];
		
						if(x>1 && x<n && count%2==0)
						{
						
							p = a[j];
						
						}				
		
					}
		
				}
		
			}
		
		}
		
		res = abs((sum-p)+l);
		if(res%2!=0)
		{
		
			printf("Yes\n");
		
		}
		
		else
		{
		
			printf("No\n");
		
		}
	
	}
	
	return 0;

}
