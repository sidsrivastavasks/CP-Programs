#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	int t;
	cin>>t;
	char ch[4] = {'W','N','E','S'};
	while(t--){
		string s;
		char pos = 'E';
		int in  = 2;
		int n;
		cin>>n>>s;
		//cout<<s<<endl;
		for(int i = 0; i<n; i++){
			if(s[i]=='0'){
				pos = ch[(in+1)%4];
				in = (in+1)%4;
			}
			else if(s[i]=='1'){
				if(in==0){
					in = 4;
				}
				pos = ch[(in-1)%4];
				in = (in-1)%4;
			}
		//	cout<<pos<<" ";
		}
		cout<<pos<<endl;
	}
	return 0;
}
