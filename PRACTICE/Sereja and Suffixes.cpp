#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	int a[n];
	map<int,int> mp;
	for(int i = 0; i<n; i++){
		cin>>a[i];
		mp[a[i]]++;
	}
	int suf[n];
	suf[0] = mp.size();
	for(int i = 1; i<n; i++){
		if(mp[a[i-1]]>1){
			mp[a[i-1]]--;
		}
		else{
			mp.erase(a[i-1]);
		}
		suf[i] = mp.size();	
	}
	while(m--){
		int x;
		cin>>x;
		cout<<suf[x-1]<<endl;
	}
	return 0;
}
