#include <iostream>
using namespace std;
#define ll long long
int main() {
	ll n,b;
	cin>>n>>b;
	ll cnt = 0;
	while(n>0){
		n/=b;
		cnt++;
	}
	cout<<cnt;
	return 0;
}
