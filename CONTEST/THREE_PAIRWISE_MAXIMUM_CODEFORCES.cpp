#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--)
	{
		ll x,y,z;
		cin>>x>>y>>z;
		if(x==y && y==z && z==x)
		{
			cout<<"YES"<<endl;
			cout<<x<<" "<<y<<" "<<z<<endl;
		}
		else if(x == z && x>y)
		{
			cout<<"YES"<<endl;
			cout<<x<<" "<<y<<" "<<"1"<<endl;
		}
		else if(y == z && y>x)
		{
			cout<<"YES"<<endl;
			cout<<x<<" "<<"1"<<" "<<z<<endl;
		}
		else if(x==y && x>z)
		{
			cout<<"YES"<<endl;
			cout<<"1"<<" "<<y<<" "<<z<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
