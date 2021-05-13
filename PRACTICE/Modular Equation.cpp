#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	ll t;
	cin>>t;
	while(t--){
		ll n,m;
		cin>>n>>m;
		
		ll ans = 0;
		for(int i = 0; i<n-1; i++){
			for(int j = i+1; j<n; j++){
				if((m%(i+1))%(j+1)==(m%(j+1))%(i+1)){
					ans++;
					cout<<i+1<<" "<<j+1<<endl;
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
