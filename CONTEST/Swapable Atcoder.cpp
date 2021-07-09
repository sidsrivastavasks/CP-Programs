#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {
	
	ll n;
	cin>>n;
	ll a[n];
	map<ll,ll> mp;
	for(int i = 0; i<n; i++){
		cin>>a[i];
		mp[a[i]]++;
	}
	
	ll ans=0;
	for(int i = 0; i<n-1; i++){
		
		if(mp[a[i]]>=1)
			mp[a[i]]--;

		if(mp[a[i]])
			ans+= n-i-1 - mp[a[i]];
		else
			ans+= n-i-1;
		
	}
	cout<<ans;
}
