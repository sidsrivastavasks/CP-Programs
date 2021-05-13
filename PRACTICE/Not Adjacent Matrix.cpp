#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n==1){
			cout<<"1"<<endl;
		}
		else if(n==2){
			cout<<"-1"<<endl;
		}
		else{
			int pp = 1,op = 2;
			for(int i = 0; i<n; i++){
				if(pp<n*n){
				for(int j = 0; j<n; j++){
					if(pp<=n*n)
						cout<<pp<<" ",
						pp+=2;
					else{
						cout<<op<<" ";
						op+=2;
					}	
				}
					cout<<endl;
				}
				else{
					for(int j = 0; j<n; j++){
						cout<<op<<" ";
						op+=2;
					}	
					cout<<endl;
				}
			}
		}
		
	}
	return 0;
}
