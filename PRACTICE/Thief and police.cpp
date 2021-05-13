#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n,m,x,y,a,b;
		cin>>n>>m>>x>>y>>a>>b;
		
		
		int pp = max(n-a, m-b);
		if(((n-x)+(m-y)) > pp){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
		}
	}
	return 0;
}

