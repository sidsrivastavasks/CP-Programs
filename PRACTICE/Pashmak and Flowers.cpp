#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll n;
	cin>>n;
	ll a[n];
	ll mn = INT_MAX,mx = 0;
	for(int i = 0; i<n; i++){
		cin>>a[i];
		if(a[i]<mn)
			mn = a[i];
		if(a[i]>mx)
			mx = a[i];
	}
	ll minval = 0,maxval = 0;
	for(int i = 0; i<n; i++){
		if(a[i]==mn)
			minval++;
		if(a[i]==mx)
			maxval++;
	}
	
	cout<<mx-mn<<" ";
	if(mn==mx){
		cout<<n*(n-1)/2;
	}
	else
		cout<<minval*maxval<<endl;
return 0;
}
