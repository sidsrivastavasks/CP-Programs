#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,m;
		cin>>n>>m;
		ll a[n],c[m];
		for(int i = 0; i<n; i++)cin>>a[i];
		for(int i = 0; i<m; i++)cin>>c[i];
		
		sort(a,a+n);
		
		ll ptr1 = n-1,ptr2 = 0,sum = 0;
		while(ptr1>=0){
			
			sum+= min(c[a[ptr1]-1],c[ptr2]);
			
			if(c[ptr2] < c[a[ptr1]-1]){
				ptr2++;
			}
			ptr1--;
		}
		
		cout<<sum<<endl;
	}
}
