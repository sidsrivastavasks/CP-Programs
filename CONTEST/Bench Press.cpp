#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define M 1000000007
#define pb push_back
void solve(){
	ll n,w,r;
	cin>>n>>w>>r;
	ll a[n];
	map<ll,ll> mp;
	for(int i = 0; i<n; i++){
		cin>>a[i];
		mp[a[i]]++;
	}
	ll sum = r;
	for(auto itr = mp.begin(); itr!=mp.end(); itr++){
		sum += (itr->first)*(itr->second) - ((itr->second)%2)*(itr->first);
	}
	
	if(sum>=w){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	
}
int main() {
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
