#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll n,m;
	cin>>n>>m;
	ll num = 0;
	for(int i = 1; i<=n; i++)
	{
		num += (m + i) / 5 - (i / 5);
	}
	cout<<num;
}
