#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	cin>>n;
	int a[6] = {0,1,7,4,5,9};
	bool ok = false;
	if(n%2!=0){
		ok=true;
	}
	if(ok){
		cout<<"7";
	}
	else{
		cout<<"1";
	}
	for(int i = 0; i<(n/2)-1; i++){
		cout<<a[1];
	}
	return 0;
}
