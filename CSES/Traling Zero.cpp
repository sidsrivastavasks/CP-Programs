#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll n;
	cin>>n;
	ll cnt = 0;
	ll div = 5;
	while(n/div>0){
		cnt+=n/div;
		//n/=div;
		div*=5;
		//cnt+=;
	}
	cout<<cnt;
}
