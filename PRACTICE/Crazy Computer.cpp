#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll n,c;
	cin>>n>>c;
	ll a[n];
	for(int i = 0; i<n; i++)
	{
		cin>>a[i];
	}
	string s = "";
	for(int i = 0; i<n-1; i++)
	{
		if(abs(a[i]-a[i+1])<=c)
		{
			s+=a[i];
		}
		else
		{
			s = "";
		}
	}
	cout<<s.length()+1;
}
