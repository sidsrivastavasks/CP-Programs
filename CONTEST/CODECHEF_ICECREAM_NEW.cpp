#include<iostream>
using namespace std;
int main()
{
	int t,n,k,i,c5,c10,c15,flag;
	cin>>t;
	while(t--)
	{
		c5=0;c10=0;c15=0;
		flag = 1;
		cin>>n;
		int k[n];
		for(i=0; i<n; i++)
		{
			cin>>k[i];
	
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
			
			cout<<"YES"<<endl;
		
		}
		else
		{
			
			cout<<"NO"<<endl;
		
		}    
	
	}
return 0;
}
