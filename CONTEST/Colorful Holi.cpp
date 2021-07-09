#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
	ll n,x,y,k;
	cin>>n>>x>>y>>k;
	
	vector<ll> a(n);
	map<ll,ll> pp;
	for(ll i = 0; i<n; i++){
		cin>>a[i];
		pp[a[i]]++;
	}
	
	ll total = abs(x-y)+1; //2
	ll cnt = 0;
	set<ll> st;

	for(ll i = 0; i<n; i++){
		if(x<=a[i] && a[i]<=y && !st.count(a[i])){
			cnt++;
			st.insert(a[i]);
		}
	}
	
	ll dist = total-cnt;//2
	
	ll mult = 0;
	ll ok = 0;
	for(auto itr = pp.begin(); itr!=pp.end(); itr++){
		if((itr->second) > 1){
			mult += itr->second;//3
			ok++;
		}
	}
	
	mult-=ok;
	
	ll ans = pp.size(),op = 0;
	if(total-cnt<=0){
		op = 0;
	}
	else{
		if(mult>k){
			if(dist<=k){
				op = dist;
			}
			else{
				op = k;
			}
		}
		else{
			if(dist<=mult){
				op = dist;
			}
			else{
				op = mult;
			}
		}
	}
	
	cout<<ans+op<<"\n";
	
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	ll t;
	cin>>t;
	while(t--){
		
		solve();
		
	}
	return 0;
}
