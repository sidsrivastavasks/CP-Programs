#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll n;
	cin>>n;
	ll a[n],pref[n];
	for(int i = 0; i<n; i++){
		cin>>a[i];
	}
	pref[0] = a[0];
	for(int i = 1; i<n; i++){
		pref[i] = pref[i-1]+a[i];
	}
	ll q;
	cin>>q;
	while(q--){
		ll p,q;
		cin>>p>>q;
		if(p>0)
			cout<<pref[q]-pref[p-1]<<endl;
		else
			cout<<pref[q]<<endl;
	}
	return 0;
}
