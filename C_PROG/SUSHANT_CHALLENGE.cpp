#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main() {
	ll n,m;
	cin>>n;
	ll a;
	priority_queue<int> pq;
	for(int i = 0; i<n; i++)
	{
		cin>>a;
		pq.push(a);
	}
	sort(a,a+n,greater<int>());
	cin>>m;
	for(int i =0; i<m; i++)
	{
		pq.top = (pq.top)/2
		//sort(a,a+n,greater<int>());
	}
	ll sum = 0;
	for(int i = 0; i<n; i++)
	{
		sum+=pq.top
	}
	cout<<sum;
	return 0;
}
