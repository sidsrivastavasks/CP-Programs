#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		int od = 0,ev = 0;
		for(int i = 0; i<n; i++){
			cin>>a[i];
			if(a[i]%2==0){
				ev++;
			}
			else{
				od++;
			}
		}
		bool ok = true;
		if(od%2!=0 || ev%2!=0){
			for(int i = 0; i<n; i++){
				ok = false;
				if(a[i]%2==0){
					for(int j = 0; j<n; j++){
						if(abs(a[i]-a[j])==1){
							ok = true;
							break;
						}
					}
					if(ok){
						break;
					}
				}
			}
		}
		if(ok){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
