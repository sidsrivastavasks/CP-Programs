#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll n;
	cin>>n;
	ll a[n+1],pref[n+1];
	vector<pair<ll,ll> > v; 
	for(int i = 1; i<=n; i++){
		cin>>a[i];
	}
	pref[1] = a[1];
	for(int i = 2; i<=n; i++){
		pref[i] = pref[i-1]+a[i];
	}
	for(int i = 1; i<=n; i++){
		cout<<pref[i]<<" ";
	}
	ll p;
	cin>>p;
	ll maxa = 0,tt=0;
	while(tt<p){
		ll p,q;
		cin>>p>>q;
		v.push_back(make_pair(p,q));
		tt++;
	}
	 
	cout<<maxa;
	return 0;
}
