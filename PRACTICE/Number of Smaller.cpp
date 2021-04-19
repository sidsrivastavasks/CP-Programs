#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int a[n],b[m];
	for(int i = 0; i<n; i++){
		cin>>a[i];
	}
	for(int i = 0; i<m; i++){
		cin>>b[i];
	}
	int ptr1 = 0, ptr2 = 0;
	int count = 0,prev = 0;
	while(ptr2<m){
		if(ptr1!=n-1){
			while(ptr1<n){
				if(a[ptr1]<b[ptr2]){
					count++;
					ptr1++;
				}	
				else{
					break;
				}
			}
		}
		cout<<prev+count<<" ";
		prev = prev + count;
		count = 0;
		ptr2++;
	}
}
