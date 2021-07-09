#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll t;
	cin>>t;
	while(t--){
		ll a,b;
		cin>>a>>b;
		if(a==b && a%2==0 || (a%2==0 && b%2==0)){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
		}
	}
	return 0;
}
