#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
void solve (ll tt){
	ll ans = 0;
	ll n;
	cin>>n;
	string s;
	cin>>s;
	cout<<"Case #"<<tt<<": "<<"1 ";
	char prev = s[0];
	ll cnt = 1;
	for(int i = 1; i<n; i++){
		if(s[i]>s[i-1]){
			cnt++;
			
		}
		else{
			cnt = 1;
			
		}
		cout<<cnt<<" ";
	}
	cout<<endl;
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
