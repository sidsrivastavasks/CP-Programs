#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int n,p;
	cin>>n>>p;
	int a[n];
	for(int i = 0; i<n; i++){
		cin>>a[i];
	}
	int prof = 0;
	for(int i = 0; i<n-1; i++){
		prof = max(prof,(a[i]-p-a[i+1]));
	}
	cout<<prof;
}
