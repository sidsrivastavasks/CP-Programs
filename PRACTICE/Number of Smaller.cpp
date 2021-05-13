#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	int a[n],b[m];
	for(int i = 0; i<n; i++){
		cin>>a[i];
	}
	for(int i = 0; i<m; i++){
		cin>>b[i];
	}
	int pp = 0;
	for(int i = 0; i<m; i++){
		while(pp<m && a[pp]<b[i]){
			pp++;
		}
		cout<<pp<<" ";
	}
	return 0;
}
