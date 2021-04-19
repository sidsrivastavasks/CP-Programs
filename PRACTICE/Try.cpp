#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
	string s;
	cin>>s;
	int a,b;
	cin>>a>>b;
	string str = s;
		ll res = 0, ans = 0;
		for(int i= 0; i<str.length(); i++){
			if((i+1)%2!=0){
				res+=(str[i]-'0')*a;
			}
			else{
				ans+=(str[i]-'0')*b;
			}
		}
	ll fin = res+ans;
	
	while(fin>9){
		string pp = to_string(fin);
		res = 0;
		for(int i = 0; i<pp.length(); i++){
			res+=pp[i]-'0';
		}
		fin = res;
	}
	cout<<fin<<endl;
}
int main() {
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
