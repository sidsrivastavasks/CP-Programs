#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,k;
		cin>>n>>k;
		int minus = 0,one = 0;
		bool ok = true,rej = false,ts = false; 
		ll a[n];
		for(int i = 0; i<n; i++){
			cin>>a[i];
		}
		for(int i = 0; i<n; i++){
			if(a[i]==-1){
				minus++;
				if(minus>ceil(n/2)){
					ok = false;
					rej = true;
					break;
				}
			}
			else if(a[i]<=1){
				one++;
				//bot = true;
			}
			else if(a[i]>k){
				ok = false;
				ts = true;
				//break;
			}
		}
		if(ok && one!=n && !rej && !ts){
			cout<<"Accepted"<<endl;
		}
		else if(rej){
			cout<<"Rejected"<<endl;
		}
		else if(one==n && !rej && !ts){
			cout<<"Bot"<<endl;
		}
		else if(ts && !rej){
			cout<<"Too Slow"<<endl;
		}
	}
	return 0;
}
