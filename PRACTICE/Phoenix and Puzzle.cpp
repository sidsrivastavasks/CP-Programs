#include <bits/stdc++.h>
using namespace std;
#define ll long long
//https://www.geeksforgeeks.org/program-to-find-whether-a-no-is-power-of-two/
int main() {
	ll t;
	cin>>t;
	while(t--){
		ll n,op = 0,pp = 0,ch = 0,num = 0;
		cin>>n;
		bool ok = false;
		if(n%2==0){
			 num = n/2;
			 op = sqrtl(num);
			 if(op*op==num)
			 	cout<<"YES"<<endl,
			 	ok = true;
			else
				ok = false;
		}
		if(!ok && n%4==0){
			pp = n/4;
			ch = sqrtl(pp);
			if(ch*ch==pp)
				cout<<"YES"<<endl,
				ok = true;

		}
		if(!ok){
			cout<<"NO"<<endl;
		}
		
	}
	return 0;
}
