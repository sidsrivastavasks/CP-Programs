#include <bits/stdc++.h>
using namespace std;

int main() {
	int top = -1;
	string s;
	cin>>s;
	char a[s.length()];
	for(int i = 0; i<s.size(); i++){
		if(s[i]=='1' || s[i]=='0'){
			top++;
			a[top] = s[i];
		}
		else{
			if(top==-1){
				continue;
			}
			else{
				top--;
			}
		}
	}
	for(int i = 0; i<=top; i++){
		cout<<a[i];
	}
	return 0;
}
