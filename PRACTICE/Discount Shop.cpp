#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		ll ans = stoi(s);
		for(int i = 0; i<s.length(); i++){
			string str="";
			for(int j = 0; j<s.length(); j++){
				if(j==i)continue;
				
				str+=s[j];
			}
			//cout<<str<<" ";
			ll n = stoi(str);
			ans = min(ans,n);
		}
		cout<<ans<<endl;
	}
	return 0;
}
