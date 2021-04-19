#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll n;
	cin>>n;
	ll a[n];
	string s;
	cin>>s;
	ll ans[n];
	ll d = 1;
	for(int i = 0; i<n; i++){
		ans[i] = 0;
	}
	
	for(int i = 0; i<n; i++){
		if(s[i]=='1'){
			for(int j = i; j<n; j++){
				if(s[j]=='1'){
					int dif = abs(i- j);
					ans[dif]++;
				}
			}
		}
	}
	for(int i = 0; i<n; i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
