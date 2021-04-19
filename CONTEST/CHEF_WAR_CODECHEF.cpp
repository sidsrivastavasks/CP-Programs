#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll h,p;
		cin>>h>>p;
		while(p>0)
		{
			h = h-p;
			p = p/2;
		}
		if(h<=0)
		{
			cout<<"1"<<endl;
		}
		else
		{
			cout<<"0"<<endl;
		}
	}
	return 0;
}
