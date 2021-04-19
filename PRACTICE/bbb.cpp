#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll n,q,k;
	cin>>n>>q>>k;
	ll a[n];
	for(int i = 0; i<n; i++){
		cin>>a[i];
	}
	while(q--){
		ll lf,rt,ans =0;
		cin>>lf>>rt;
		lf--;
		rt--;
		if(lf>0 && rt<n-1){
		for(int i = lf; i<=rt; i++){
			//cout<<a[i]<<" ";
			ll frnt = a[i+1]-1;
			frnt = abs(frnt-a[i]);
			ans+=frnt;
		}
		}
		else{
			if(lf==0){
				ans+= a[lf+1]-2;
			}
			if(rt==n-1){
				ll ft = k-a[rt];
				ft = abs(ft-a[rt-1]);
				ans+=ft;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
