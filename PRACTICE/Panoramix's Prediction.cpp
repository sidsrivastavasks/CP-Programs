#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	int ans = 0;
	for(int i = n+1; i<=50; i++){
		bool ok = true;
		for(int j = 2; j<i; j++){
			if(i%j==0){
				ok = false;
				break;
			}
		}
		if(ok){
			ans = i;
			break;
		}
	}
	if(ans==m){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}
