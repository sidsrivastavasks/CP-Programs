#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	bool lwr = false,upr = false;
	int lkr = 0,ukr = 0;
	for(int i = 0; i<s.length(); i++){
		if(isupper(s[i])){
			ukr++;
		}
		else{
			lkr++;
		}
	}
	if(lkr>=ukr){
		lwr = true;	
	}
	else if(lkr<ukr){
		upr = true;
	}
	for(int i = 0; i<s.length(); i++){
		if(upr && islower(s[i])){
			putchar(toupper(s[i]));
			continue;
		}
		else if(lwr && isupper(s[i])){
			putchar(tolower(s[i]));
			continue;
		}
		cout<<s[i];
	}
}
