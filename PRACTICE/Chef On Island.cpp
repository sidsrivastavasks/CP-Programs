#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int x,y,a,b,d;
		cin>>x>>y>>a>>b>>d;
		if(a*d>x || b*d>y){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
		}
	}
	return 0;
}
