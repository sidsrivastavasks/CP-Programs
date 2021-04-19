#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--){
		ll n, t1 = 0, t2 = 1, nextTerm = 0,m;
    	cin >> n>>m;
   		vector<ll> fib;
    	for(int i = 1; i <= n; ++i) {
        	if(i == 1) {
            	fib.push_back(t1);
            	continue;
       	 	}
        	if(i == 2) {
            	fib.push_back(t2);
            	continue;
        	}
        	nextTerm = (t1%1000000007 + t2%1000000007)%1000000007;
        	t1 = t2;
        	t2 = nextTerm;
        	nextTerm%=1000000007;
        	fib.push_back(nextTerm);
    	}
    	ll ptr1 = 0, ptr2 = (fib.size()-1)%1000000007;
    	for(int i = 0; i<m; i++){
    		if((i+1)%2!=0){
    			cout<<fib[ptr1]%1000000007<<" ";
    			ptr1++;
			}
			else{
				cout<<fib[ptr2]%1000000007<<" ";
				ptr2--;
			}	
		}
		cout<<endl;
	}
    return 0;
}
