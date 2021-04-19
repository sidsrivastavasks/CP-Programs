#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		bool ok = false;
		while(n>1)
		{
			if(n%2!=0)
			{
				ok  =true;
				break;
			}
			n/=2;
		}
		if(ok)
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
