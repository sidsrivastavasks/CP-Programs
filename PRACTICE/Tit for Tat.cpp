#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int ptr1 = 0,ptr2 = 1;
		int a[n];
		for(int i =0; i<n; i++){
			cin>>a[i];
		}
		int rem = 0;
 
		for(int i = 0; i<n-1; i++)
		{
    		int pp = min(a[i],k);
    		a[i]-=pp;
    		k-=pp;
    		rem+=pp;
		}
		a[n-1]+=rem;
 
		for(int i = 0; i<n; i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
