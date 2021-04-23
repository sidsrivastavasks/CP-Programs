#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		if((n%2050)!=0){
			cout<<"-1"<<"\n";
		}
		else{
			
			n/=2050;
			ll res = 0;
			while(n>0){
				
				res+=n%10;
				n/=10;
			}
			cout<<res<<"\n";
			
		}
	}
	return 0;
}
