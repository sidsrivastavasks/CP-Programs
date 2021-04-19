#include<bits/stdc++.h>
using namespace std;
int main(){
	int k,n;
	cin>>k>>n;
	int a[n];
	for(int i = 0; i<n; i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int ch = INT_MAX;
	if(n==k){
		cout<<a[n-1]-a[0];
	}
	else{
		for(int i = 0; i<=n-k; i++){
			if(ch>a[i+k-1]-a[i]){
				ch = a[i+k-1]-a[i];
			}
			//cout<<a[i]<<" "<<a[i+k-1]<<endl;
		}
	cout<<ch;
	}
	return 0;
}
