#include<bits/stdc++.h>
#include<cmath>
using namespace std;
#define ll long long
int main()
{
	ll t,n,i;
	cin>>t;
	while(t--)
	{
		ll temp = 0;
		cin>>n; 
		ll a[n];
		for(i =0; i<n; i++)
		{
			cin>>a[i];
		}
		for(i=0; i<n-1; i++)
		{
			temp+= abs(a[i] - a[i+1])-1;
		}
		cout<<temp<<"\n";
	}
	return 0;
}
