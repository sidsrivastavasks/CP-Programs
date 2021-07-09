#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll check(ll md){
	return (md*(md+1))/2;
}
ll bin(ll n){
	ll low = 1, high = 1e9;
	ll ans = -1;
	while(low<=high){
		ll mid = low+(high-low)/2;
		ll op = check(mid);
		if(op>=n){
			ans = mid;
			high = mid-1;
		}
		else if(op<n){
			low = mid+1;
		}
		
	}
	return ans;
}

int main() {
	
	ll n;
	cin>>n;
	
	cout<<bin(n);
}
