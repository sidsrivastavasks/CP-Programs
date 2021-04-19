#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll n;
	cin>>n;
	ll count = 0;
	for(int i = 1; i<=n; i++)
	{
		ll k = i;
		while(k>0)
		{
			k/=10;
			count++;	
		}
	}
	cout<<count;
}
