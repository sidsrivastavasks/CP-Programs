#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		if(n<k){
			if(k%n==0){
				cout<<k/n<<endl;
			}
			else{
				int ans = (k/n)+(k%n);
			cout<<ans<<endl;
			}
		}
		else if(n>k){
			if(n%k==0){
				cout<<n/k<<endl;
			}
			else{
				int nxt = n/k+n%k;
				if(nxt%n==0){
					cout<<nxt/n<<endl;
				}
				else{
					cout<<nxt/n+nxt%n<<endl;
				}
			}
		}
		else{
			cout<<n/k<<endl;
		}
	}
}
