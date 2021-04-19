#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n],pref[n+1];
		for(int i = 0; i<n; i++){
			cin>>a[i];
		}
		if(a[0]==-1){
			a[0] = 0;
		}
		pref[0] = a[0];
		int cnt = 1;
		for(int i = 1; i<n; i++){
			if(a[i]==-1){
				a[i] = ((pref[i-1])/(i+1));
				pref[i] = pref[i-1]+a[i]; 
			}
			else{
				pref[i] = pref[i-1]+a[i]; 
			}
			cnt++;
		}
		for(int i = 0; i<n; i++){
			cout<<pref[i]<<" "<<a[i]<<" ";
		}
		cout<<endl;
		for(int i = 0; i<n; i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}
