#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll t;
	cin>>t;
	ll tt = 1;
	while(t--){
		ll n,q,cnt=0;
		cin>>n>>q;
		string s;
		cin>>s;
		while(q--){
			map<char,int> mp;
			ll l,r;
			cin>>l>>r;
			for(int i = l-1; i<=r-1; i++){
				mp[s[i]]++;
			}
			bool ok = false,flag = true;
			for(auto itr = mp.begin(); itr!=mp.end(); itr++){
				if((itr->second)%2!=0){
					if(!ok)
						ok = true;
					else{
						flag = false;
						break;
					}
				}
			}
			if(flag)
				cnt++;
		}
		cout<<"Case "<<"#"<<tt<<": "<<cnt<<endl;
		tt++;
	}
	return 0;
}
