#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	int n;
	cin>>n;
	ll x[n];
	ll sum = 0, l,r,ans = 1e9;
	for(int i = 0; i<n; i++){
		cin>>x[i];
	}
	l = x[0],r = x[0];
	for(int i = 0; i<n; i++){
		l = min(l,x[i]);
		r = max(r,x[i]);
	}
	ll cst = 0;
	for(int i = l; i<=r; i++){
		cst = 0;
		for(int j = 0; j<n; j++){
			cst+= (x[j]-i)*(x[j]-i);
		}
		ans = min(ans,cst);
	}
	cout<<ans;
	return 0;
	
}
