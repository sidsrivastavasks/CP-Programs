#include <bits/stdc++.h>
using namespace std;
#define ll long long 
void solve(vector<ll> a, ll n)
{
	map<int, int>fr;
	sort(a.begin(),a.end());
	for(ll i =0; i<n; i++)
	{
		fr[a[i]]++;
	}
	for(auto itr = fr.begin(); itr!=fr.end();itr++)
	{
		if(itr->second%2!=0)
		{
			cout<<itr->first<<" ";
			break;
		}
	}
}
int main()
{
	ll t,i,n,a,b,x,y,j;
	cin>>t;
	while(t--)
	{
		x = 0; y = 0;
		ll count;
		vector<ll> ax;
		vector<ll> ay;
		cin>>n;
		int res = 4*n - 1;
		for(i = 1; i<=res; i++)
		{
			cin>>a>>b;
			ax.push_back(a);
			ay.push_back(b);
		}
		ll l = ax.size();
		solve(ax,l);
		solve(ay,l);
		cout<<endl;
		//cout<<x<<" "<<y<<endl;
	 }
	return 0; 
}
