#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int x,y;
		cin>>x>>y;
		for(int i = 0; i<n; i++){
			string s = "";
			cin>>s;
			int F = 0,P = 0;
			for(int i = 0; i<m; i++){
				if(s[i]=='F'){
					F++;
				}
				else if(s[i]=='P'){
					P++;
				}
			}
			if(F>=x){
				cout<<"1";
			}
			else if(F == x-1 && P >= y){
				cout<<"1";
			}
			else{
				cout<<"0";
			}
		}
		cout<<endl;
	}
	return 0;
}
