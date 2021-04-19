#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll n,k,ans = 0;
	cin>>n>>k;
	if(n%2==0)
	{
		if(k>n/2)
		{
			k = k-n/2;
			ans = 2+(k-1)*2;
		}
		else
		{
			ans = 1+(k-1)*2;
		}
	}
	else
	{
		if(k>(n+1)/2)
		{
			k = k-(n+1)/2;
			ans = 2+(k-1)*2;
		}
		else
		{
			ans = 1+(k-1)*2;
		}
	}
	cout<<ans;
	return 0;
}
