#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
void solve(){
	ll n;
	cin>>n;
	string s;
	cin>>s;
	ll z = 0, o = 0;
	bool ok = false;
	for(int i = 0; i<n; i++){
		if(s[i]=='0'){
			z++;
		}
		else{
			o++;
		}
		if(o>=z){
			ok = true;
			break;
		}
	}
	if(ok){
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
