#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll n;
	cin>>n;
	ll a[n];
	int small = INT_MAX;
	int pos = 0;
	for(int i = 0; i<n; i++){
		cin>>a[i];
		if(a[i]<small){
			small = a[i];
			pos = i;}
	}	
	sort(a,a+n);
	if(n>1 && a[0]==a[1]){
		cout<<"Still Rozdil";
	}
	else{
		cout<<pos+1;
	}
	return 0;
}
