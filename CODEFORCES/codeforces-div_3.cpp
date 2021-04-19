#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll a,b,x,y,n;
		cin>>a>>b>>x>>y>>n;
		if(a<=b)
		{
			if(n>=x)
			{
				a = a-(n-x);
				n = x;
			}
			else
			{
				a = a-n;
				n =0;
			}
		}		
		else if(a>b)
		{
			if(n>=y)
			{
				b = b-(n-y);
				n = y;
			}
			else
			{
				b = b-n;
				n =0;
			}
		}		
		if(n>0 &&((a>x) || (b>y)))
		{
			if(a>x)
			{
				if(n>=x)
				{
					a = a-(n-x);
					
				}
				else
				{
					a = a-n;
				}
			}
			else
			{
				if(n>=y)
				{
					b = b-(n-y);
					
				}
				else
				{
					b = b-n;
				}
			}
		}
		cout<<b*a<<endl;
	}
}
