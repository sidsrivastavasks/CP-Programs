#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
	ll n;
	cin>>n;
	ll a[n];
	for(int i = 0; i<n; i++){
		cin>>a[i];
	}
	int ele = 0,pos = 0,cnt=0;
	bool flag = true;
	for(int i = 1; i<n-1; i++){
		
	}
	if(flag){
		for(int i = 0; i<n; i++){
			if(a[i]>ele){
				ele = a[i];
				pos = i;
			}
		}
		cout<<abs(n-1-pos);
	}
	else{
		cout<<"-1";
	}
}

