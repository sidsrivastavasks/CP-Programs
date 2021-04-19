#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll a,b;
		cin>>a>>b;
		ll ans = INT_MAX,cnt,pt;
		ll run = b%10;
		run = abs(9-run);
		bool ok = false;
		if(b==1){
			b++;
			 ok = true;
		}
		for(int i = b; i<=(b+run); i++){
			cnt = 0;
			pt = a;
			while(pt>0){
				pt/=i;
				cnt++;
			}
			ll chk = abs(i-b) + cnt;
			ans = min(ans,chk);
		}
		if(ok){
			ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}
