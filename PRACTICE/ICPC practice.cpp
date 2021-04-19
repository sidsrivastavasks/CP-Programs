#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll n;
	cin>>n;
	vector<ll> v;
	for(int i = 0; i<n; i++){
		ll x;
		cin>>x;
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	ll pref[n];
	pref[0] = v[0];
	//cout<<pref[0]<<" ";
	for(int i = 1; i<n; i++){
		pref[i] = pref[i-1]+v[i];
		//cout<<pref[i]<<" ";
	}
	ll q;
	cin>>q;
	while(q--){
		ll res = 0,k = 0;
		cin>>k;
		cout<<pref[(n-k)-1]<<endl;
	}
	return 0;
}
