#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll n,k;
	cin>>n>>k;
	ll a[n];
	set<ll> st;
	for(int i = 0; i<n; i++){
		cin>>a[i];
	}
	sort(a,a+n);
	
	ll ptr = 0,ans = 1;
	for(int i = 0; i<n; i++){
		if(a[i]%k || !st.count(a[i]/k)){
			st.insert(a[i]);
		}
	}
	
	cout<<st.size();
	
	return 0;
}
