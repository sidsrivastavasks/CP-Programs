#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	
	ll n,m;
	cin>>n>>m;
	
	ll a[n];
	for(int i = 0; i<n; i++){
		cin>>a[i];
	}
	
	ll cur = 0;
	for(int i = 0; i<n; i++){
		ll pages = (a[i]+cur)/m;
		cur = (a[i]+cur)%m;
		
		cout<<pages<<" ";
	}
	
}
