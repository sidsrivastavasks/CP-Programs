#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	if(s.length()==1 && s[s.length()-1]=='.'){
		cout<<"0";
		return 0;
	}
	int pt = 0;
	for(int i = 0; i<s.length()-1; i++){
		if(s[i]=='.'){
			cout<<0;
		}
		else if(s[i]=='-' && s[i+1]=='.'){
			cout<<1;
			i++;
		}
		else if(s[i]=='-' && s[i+1]=='-'){
			cout<<2;
			i++;
		}
		pt=i;
	}
	if(pt<s.length()-1){
		if(s[s.length()-1]=='.'){
			cout<<0;
		}
	}
	return 0;
}
