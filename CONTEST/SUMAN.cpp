#include<stdio.h>
#include<math.h>

int main() 
{
	
	int t,n,sum,b,count,k,i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		count = 0;
		sum = 0;
		
		for(i=0; i<n; i++)
		{
			scanf("%d",&k);
			if(k-5<=sum)
			{
				
				b=k-5;
				count++;
				sum+=5;
				sum=sum-b;
			
			}

		
		}
		
		if(n == count)
		{
			
			printf("YES\n");
		
		}
		else
		{
			
			printf("NO\n");
		
		}    
	
	}
return 0;
}
