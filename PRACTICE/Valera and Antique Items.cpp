#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll n,p;
	cin>>n>>p;
	vector<ll> v;
	for(int i = 1; i<=n; i++){
		ll k,kk=0;
		cin>>k;
		bool ok = false;
		while(kk<k){
			ll a;
			cin>>a;
			if(a<p){
				if(!ok && a<p){
					v.push_back(i);
					ok = true;}
			}
			kk++;
		}
	}
	cout<<v.size()<<endl;
	sort(v.begin(),v.end());
	for(int i = 0; i<v.size(); i++){
		cout<<v[i]<<" ";
	}
	return 0;
}
