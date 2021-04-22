#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll n,m;
	cin>>n>>m;
	ll a[m];
	for(int i = 0; i<m; i++){
		cin>>a[i];
	}
	sort(a,a+m);
	if(a[0]==1 || a[m-1]==n){
		cout<<"NO";
		return 0;
	}
	bool ok = true;
	for(int i = 1; i<m-1; i++){
		if(a[i]-a[i-1]==1 && a[i+1]-a[i]==1){
			ok = false;
			break;
		}
	}
	if(ok){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}
