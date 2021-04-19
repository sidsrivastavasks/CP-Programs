#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i<n; i++){
			cin>>a[i];
		}
		
		int ans[n];
		int ptr1 = 0,ptr2 = n-1;
		for(int i=0; i<n; i++){
			if(a[i]%2!=0){
				ans[ptr1] = a[i];
				ptr1++;
			}
			else{
				ans[ptr2] = a[i];
				ptr2--;
			}	
		}
		
		for(int i = 0; i<n; i++){
			cout<<ans[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
