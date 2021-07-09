#include<bits/stdc++.h>
using namespace std;
int main(){
	
	
	int n;
	cin>>n;
	int a[n];
	
	for(int i = 0; i<n; i++){
		cin>>a[i];
	}
	
	int ptr1 = 0, ptr2 = n-1;
	while(ptr1<ptr2){
		
		if(a[ptr1]>=0 && a[ptr2]<0){
			swap(a[ptr1],a[ptr2]);
			ptr1++;
			ptr2--;
		}
		else if(a[ptr1]<0){
			ptr1++;
		}
		else if(a[ptr2]>0){
			ptr2--;
		}
		
	}
	
	for(int i = 0; i<n; i++){
		cout<<a[i]<<" ";
	}
	
	return 0;
	
}
