#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int ch = (n%2==0)? n-1/2: n/2;
		if(k<=ch){
			int a[n];
			bool ok = false;
			for(int i = 0; i<n; i++){
				if(ok){
					a[i] = n-i;
					ok = false;
				}
				else{
					ok = true;
					a[i] = 0;
				}
			}
			for(int i = 0; i<n; i++){
				cout<<a[i]<<" ";
			}
			cout<<endl;
		}
		else{
			cout<<"-1"<<endl;
		}
	}
	return 0;
}
