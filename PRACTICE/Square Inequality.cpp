#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main() {
	int a,b,c;
	cin>>a>>b>>c;
	a*=a;
	b*=b;
	c*=c;
	if(a+b<c){
		cout<<"Yes";
	}
	else{
		cout<<"No";
	}
	return 0;
}
