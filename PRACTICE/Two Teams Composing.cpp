#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		map<int, int> a;
		for(int i = 0; i<n; i++){
			ll x;
			cin>>x;
			a[x]++;
		}
		ll ans = a.size();
		ll size = 0;
		bool ok = false;
		for(auto itr = a.begin(); itr!=a.end(); itr++){
			if(itr->second > size)
				size = itr->second;
		}
		if(ans==size){
			cout<<ans-1<<endl;
		}
		else{
			cout<<min(ans,size)<<endl;
		}
	}
	return 0;
}
