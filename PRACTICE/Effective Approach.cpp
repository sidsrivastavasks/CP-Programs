#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll n;
	cin>>n;
	ll a[n+1];
	for(int i = 1; i<=n; i++){
		ll pp = 0;
		cin>>pp;
		a[pp] = i;
	}
	ll m;
	cin>>m;
	ll one = 0,two = 0;
	for(int i = 0; i<m; i++){
		ll tt = 0;
		cin>>tt;
		one+= a[tt];
		two+= abs(a[tt]-n)+1;
	}
	cout<<one<<" "<<two;
}
