#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define endl "\n"
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,k;
		cin>>n>>k;
		vector<ll> v;
		for(int i = 0; i<n; i++){
			ll pp;
			cin>>pp;
			v.pb(pp);
		}
		ll pos = -1,ptr=0;
		while(k--){
			
			while(ptr<n-1 && v[ptr]>=v[ptr+1]){
				//cout<<ptr<<" ";
				ptr++;
			}
			if(ptr==(n-1)){
				pos = -1;
				ptr = 0;
				break;
			}
			else{
				pos = ptr+1;
				v[ptr]++;
				if(ptr>0)
					ptr--;
			}
			/**for(int i = 0; i<n; i++){
				cout<<v[i]<<" ";
			}
			cout<<endl;**/
		}
		if(pos==(-1)){
			cout<<"-1"<<endl;
		}
		else
			cout<<pos<<endl;
	}
	return 0;
}
