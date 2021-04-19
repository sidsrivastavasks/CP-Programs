#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
void solve (ll tt){
	ll ans = 0,n;
	cin>>n;
	vector<ll> a;
	for(int i = 0; i<n; i++){
		ll pp;
		cin>>pp;
		a.pb(pp);
	}
	map<int,int> mp;
	for(int i = 0; i<n-1; i++){
		mp[a[i]-a[i+1]]++;
	}
	ll maxDif = 0,dif = 0,cnt = 1;
	for(auto itr = mp.begin(); itr!=mp.end(); itr++){
		if(itr->second > maxDif){
			maxDif = itr->second;
			dif = itr->first;
		}
	}
	bool ok = false;
	for(int i = 0; i<n-1; i++){
		if(!ok && a[i]-a[i+1]==dif){
			cnt++;
			ok = true;
		}
		else if(ok && a[i]-a[i+1]==dif){
			cnt++;
		}
		else if(ok && a[i]-a[i+1]!=dif){
			cnt++;
			ll pos = a[i];
			a[i] = dif>0? a[i]-dif : a[i]+dif;
			for(int j = i; j<n-1; j++){
				if(a[j]-a[j+1]==dif){
					cnt++;
				}
				else{
					break;
				}
			}
			a[i] = pos;
			ans = max(ans,cnt);
			cnt = 1;
			ok = false;
		}
	}
	cout<<"Case #"<<tt<<": "<<ans<<endl;
}
int main(){
	ll t;
	cin>>t;
	ll tt = 1;
	while(t--){
		solve(tt);
		tt++;
	}
}
