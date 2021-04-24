#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll q;
	cin>>q;
	while(q--){
		ll c,m,x;
		cin>>c>>m>>x;
		ll ans = min({c,m,((c+m+x)/3)});
		cout<<ans<<endl;
	}
	return 0;
}
