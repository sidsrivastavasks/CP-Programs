#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> a(n);
	vector<bool> flag(200005,false);
	
	for(int i = 0; i<n; i++){
		cin>>a[i];
		if(!flag[a[i]]){	
			flag[a[i]] = true;
		}
	}	
	
	vector<vector<int>> adj;
	for(int i = 0; i<n; i++){
		adj[a[i]].push_back(a[n-i-1]);
		adj[a[n-i-1]].push_back(a[i]);
	}
	
	for(int i = 1; i<200005; i++){
		
		if(!flag[a[i]]){
			
		}
		
	}
	return 0;
}
