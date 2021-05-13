#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) sort(x.begin(),x.end())

void solve(){
	ll n,x;
	cin>>n>>x;
	ll a[n];
	ll sum = 0;
	for(int i = 0; i<n; i++){
		cin>>a[i];
		
	}
	ll ptr1 = 0,ptr2 = 0;
	sort(a,a+n);
	for(int i = 0; i<n; i++){
		sum+=a[i];
		if(sum==x){
			sum-=a[i];
			swap(a[i],a[n-1]);
			sum+=a[i];
			if(sum==x){
				break;
			}
		}
	
	}
	bool ok = true;
	ll ans = 0;
	for(int i = 0; i<n; i++){
		ans+=a[i];
		if(ans==x){
			ok = false;
			break;
		}
	}
	
	if(ok){
		cout<<"YES"<<endl;
		for(int i = 0; i<n; i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
}

int main() {
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
