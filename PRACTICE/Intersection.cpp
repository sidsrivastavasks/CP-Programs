#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main() {
	int n;
	cin>>n;
	int a[n],b[n];
	for(int i = 0; i<n; i++){
		cin>>a[i];
	}
	for(int i = 0; i<n; i++){
		cin>>b[i];
	}
	
	map<int,int> s;
	for(int i = 0; i<n; i++){
		for(int j = a[i]; j<=b[i]; j++){
			s[j]++;
		}
	}
	int cnt= 0;
	
	for(auto itr = s.begin(); itr!=s.end(); itr++){
		if(itr->second==n){
			cnt++;
		}
	}
	
	cout<<cnt;
	return 0;
}
