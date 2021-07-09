#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int n;
	vector<ll> v;
	cin>>n;
	ll sum = 0;
	for(int i = 0; i<n; i++)
	{
		ll a;
		cin>>a;
		v.push_back(a);
		sum+=a;
	}
	if(sum%2==0)
	{
		cout<<"0"<<endl;
	}
	else 
	{
		cout<<"1"<<endl;
	}
}
