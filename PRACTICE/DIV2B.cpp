#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll A,B,n,pp=0;
		cin>>A>>B>>n;
		ll a[n],b[n];
		for(int i = 0; i<n; i++){
			cin>>a[i];
		}
		for(int i = 0; i<n; i++){
			cin>>b[i];
		}
		
		vector<pair<ll,ll> > v;
		for(int i = 0; i<n; i++){
			v.pb(mp(a[i],b[i]));
		}
		
		sort(v.begin(),v.end());
		bool ok = true;
		ll mstcnt = 0;
		
		for(int i = 0; i<n-1; i++){
			ll q = 1 + ((v[i].second - 1) / A);;
			ll kk = (v[i].first)*q;
			B-= kk;
			mstcnt++;
			if(B<1 && mstcnt<n){
				ok = false;
				break;
			}			
		}
		if(ok){
			
				while(B>0 && v[n-1].second>0){
					B-= v[n-1].first;
					v[n-1].second-=A;
				}
				if(B<1 && v[n-1].second>0){
					ok = false;
				}
			
		}
		if(ok){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
