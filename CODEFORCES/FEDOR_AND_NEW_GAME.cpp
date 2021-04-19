#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool binary(ll res,ll k)
{
	ll one =0;
	while(res>0)
	{
		ll str = res%2;
		res = res/2;
		if(str==1)
			one++;
	}
	if(one<=k)
		return true;
return false;
}
int main()
{
	ll n,m,k;
	cin>>n>>m>>k;
	ll a[m+1];
	for(ll i = 0; i<m+1; i++)
	{
		cin>>a[i];
	}
	ll fedor = a[m],frnd = 0,res;
	for(ll i = 0; i<m; i++)
	{
		res = fedor^a[i];
		if(binary(res,k))
			frnd++;
	}
	cout<<frnd;
	return 0;
}
