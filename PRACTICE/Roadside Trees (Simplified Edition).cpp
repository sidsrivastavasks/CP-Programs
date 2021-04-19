#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int pos = 0,cnt = 0;
	while(t--){
		int n;
		cin>>n;
		if(pos==0){
			cnt+=n+1;
		}
		else if(pos==n){
			cnt+=2;
		}
		else if(pos<n){
			cnt+= (n-pos)+2;
		}
		else if(pos>n){
			cnt+=(pos-n) + 2;
		}
		pos = n;
	}
	cout<<cnt;
}
