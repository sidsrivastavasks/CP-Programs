#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector<pair<ll,ll> > v(n);
		for(int i = 0; i<n; i++){
			v[i].first = 0;
			v[i].second = 0;
		}
		map<string,ll> mp;
		map<string,ll> :: iterator it;
		ll j = 0;
		for(int i = 0; i<n; i++){
			string s;
			ll x;
			cin>>s>>x;
			it = mp.find(s);
			if(it==mp.end()){
				mp.insert({s,j});
				if(x==0){
					(v[j].first)++;
				}
				else{
					(v[j].second)++;
				}
				j++;
			}
			else{
				if(x==0){
					(v[it->second].first)++;
				}
				else{
					(v[it->second].second)++;
				}
			}
			
		}
		ll count = 0;
		for(auto itr = mp.begin(); itr!=mp.end(); itr++){
			ll pp = itr->second;
			ll on = (v[pp].second);
			ll zr = (v[pp].first);
			count+= min(zr,on);
			//cout<<zr<<" "<<on<<" ";
			
		}
		cout<<n-count<<endl;
	}
}
