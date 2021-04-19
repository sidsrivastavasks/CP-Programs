#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	bool ok = false;
	int pos = 0;
	for(int i = s.length()-1; i>=0; i--){
		if((s[i]-'0')%2==0){
			if(!ok && s[i]>s[s.length()-1]-'0'){
				pos = i;
				ok = true;
			}
			else if(s[i]-'0'<s[s.length()-1]-'0'){
				pos = i;
			}
		}
	}
	swap(s[pos],s[s.length()-1]);
	if(ok){
		cout<<s;
	}
	else{
		cout<<"-1";
	}
	return 0;
}
