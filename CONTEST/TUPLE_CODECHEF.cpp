#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,t;
	int p[3],a[3],c[3],d[3];
	cin>>t;
	while(t--)
	{
		int count = 0,f = 0;
		for(i=0; i<3; i++)
		{
			cin>>p[i];
		}
		for(i=0; i<3; i++)
		{
			cin>>a[i];
		}
		for(i=0; i<3; i++)
		{
			if(p[i] != a[i])
			{
				c[f] = p[i];
				d[f] = a[i];
				f++;
				count ++;
			}
		}
		if(count == 3)
		{
			if (p[0]-a[0]==p[1]-a[1] && p[1]-a[1]==p[2]-a[2])
			{
				cout<<1<<endl;
			}
			else if((a[0]/p[0])==a[0]/p[0] && a[0]/p[0]==a[1]/p[1] && a[0]/p[0]==a[2]/p[2])
			{
				cout<<1<<endl;
			}
			else if(p[0]-a[0]==p[1]-a[1] || p[1]-a[1]==p[2]-a[2])
			{
				cout<<2<<endl;
			}
			else if((a[0]/p[0])==a[0]/p[0] && (a[0]/p[0]==a[1]/p[1] || a[0]/p[0]==a[2]/p[2]))
			{
				cout<<2<<endl;
			}
			else 
			{
				cout<<3<<endl;
			}
		}
		else if(count == 2)
		{
			if (p[0]-a[0]==p[1]-a[1])
            {
            	
				cout<<1<<endl;
			}
        	else if ((a[0]/p[0])==a[0]/p[0] and a[0]/p[0]==a[1]/p[1])
        	{
        		cout<<1<<endl;
			}
            
        	else
			{
        		cout<<2<<endl;
			}
		}
		else if(count == 1)
		{
			cout<<1<<endl;
		}
		else
		{
			cout<<0<<endl;
		}
	}
	return 0;
}
