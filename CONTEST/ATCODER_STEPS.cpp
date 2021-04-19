#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll n;
	cin>>n;
	ll sum = 0;
	//ll a[n];
	ll a;
	ll prev = 0;
	cin>>prev;
	for(ll i =1; i<n; i++)
	{
		cin>>a;
		if(a<prev)
		{
			sum+=abs(prev-a);
			prev = a+abs(prev-a);
		}
		else
		{
			prev = a;
		}
	}
	cout<<sum;
	return 0;
}
