#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		int cnt = 1;
		for(int i = 0; i<str.length(); i++){
			if(cnt%2==0){
				if(str[i]=='z'){
					str[i] = 'y';
				}
				else if(str[i]!='z'){
					str[i] = 'z';
				}
			}
			else{
				if(str[i]=='a'){
					str[i] = 'b';
				}
				else if(str[i]!='a'){
					str[i] = 'a';
				}
			}
			cnt++;
		}
		cout<<str<<endl;
	}
	return 0;
}
