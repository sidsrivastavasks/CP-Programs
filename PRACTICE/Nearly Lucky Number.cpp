#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	int cnt = 0;
	for(int i = 0; i<s.length(); i++){
		if(s[i]=='4' || s[i]=='7'){
			cnt++;
		}
	}
	string str = to_string(cnt);
	//cout<<str;
	bool ok = true;
	for(int i = 0; i<str.length(); i++){
		if(str[i]!='7' && str[i]!='4'){
			ok = false;
			break;
		}
	}
	if(ok){
		cout<<"YES";
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;
}
