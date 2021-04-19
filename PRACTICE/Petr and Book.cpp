#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,sum = 0;
	cin>>n;
	int a[7];
	for(int i = 0; i<7; i++){
		cin>>a[i];
	}
	int i = 0;
	while(sum<n){
		sum+=a[i];
		i = (i+1)%7;
	}
	if(i==0){
		cout<<"7";
	}
	else
		cout<<i;
	return 0;
}
