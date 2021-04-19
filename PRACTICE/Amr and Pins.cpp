#include<bits/stdc++.h>
using namespace std;
int main(){
	long long r,x,y,a,b;
	cin>>r>>x>>y>>a>>b;
	long long d = (abs(a-x)*abs(a-x))+(abs(b-y)*abs(b-y));
	cout<<ceil(sqrt(d)/(2*r));
	return 0;
}
