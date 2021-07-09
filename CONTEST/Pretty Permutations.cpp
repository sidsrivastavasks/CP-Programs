#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mp make_pair;
#define pb push_back;
void solve(){
	
	ll n;
	cin>>n;
	ll a[n],arr[n];
	for(int i = 0; i<n; i++){
		arr[i] = i+1;
	}
	if(n==2){
		cout<<"2 1"<<endl;
		return;
	}
	for(int i = 0; i<n-2; i+=2){
			a[i] = arr[i+2];
			a[i+1] = arr[i];
			a[i+2] = arr[i+1];
		
	}
	
	for(int i = 0; i<n; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}	
}
