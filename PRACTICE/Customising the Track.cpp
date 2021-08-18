#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll a[n];
		ll sum = 0;
		for(int i = 0; i<n; i++){
			cin>>a[i];
			sum+=a[i];
		}
		
		cout<<(sum%n)*(abs(n-(sum%n)))<<endl;
		
	}
}
