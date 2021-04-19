#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	sort(s.begin(),s.end());
	char ch = s[0];
	int count = 1;
	for(int i = 0 ; i<s.length(); i++){
		if(ch!=s[i]){
			count++;
			ch = s[i];
		}
	}
	if(count%2!=0){
		cout<<"IGNORE HIM!";
	}
	else{
		cout<<"CHAT WITH HER!";
	}
	return 0;
}
