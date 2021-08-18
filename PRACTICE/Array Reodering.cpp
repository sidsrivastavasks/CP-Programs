#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

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
		
		sort(a,a+n);
		vector<int> ans;
		for(int i = 0; i<n; i++){
			if(a[i]%2==0){
				ans.pb(a[i]);
			}
		}
		for(int i = 0; i<n; i++){
			if(a[i]%2!=0){
				ans.pb(a[i]);
			}
		}
		
		int cnt = 0;
		for(int i = 0; i<n; i++){
			for(int j = i+1; j<n; j++){
				if(__gcd(ans[i],2*ans[j])>1){
					cnt++;
				}
			}
		}
		
		cout<<cnt<<endl;
	}
	return 0;
}
