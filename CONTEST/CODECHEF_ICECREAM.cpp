#include<stdio.h>
#include<math.h>
int main()
{
	int t,n,k,i,c5,c10,c15,flag;
	scanf("%d",&t);
	while(t--)
	{
		c5=0;c10=0;c15=0;
		flag = 1;
		scanf("%d",&n);
		int k[n];
		for(i=0; i<n; i++)
		{
			scanf("%d",&k[i]);
	
		}
		for(i=0; i<n; i++)
		{
			if(k[0]>5)
			{
				flag = 0;
				break;
			}
			else if(k[i] == 5)
			{
				c5++;
			}
			else if(k[i]==10)
			{
				if(c5>0)
				{
					
					c10++;
					c5--;
				}
				else
				{
					flag = 0;
					break;
				}
			}
			else if(k[i]==15)
			{
				if(c5>1 || c10>0)
				{
					if(c10>0)
					{
						
						c10--;
					}
					else
					{
						
						c5-=2;
					}
				}
				else
				{
					flag = 0;
					break;
				}
			}
		}
		
		if(flag == 1)
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
