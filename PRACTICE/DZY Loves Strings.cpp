#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	int k,val=0,ch=0;
	cin>>s>>k;
	//int val = 0,ch = 0;
	int alph[27];
	for(int i = 0; i<26; i++){
		cin>>alph[i];
		if(ch<alph[i]){
			ch = alph[i];
		}
	}
	for(int i = 0; i<s.length(); i++){
		val+=(i+1)*(alph[(s[i]-'a')]);
		//cout<<val<<endl;
	}
	//cout<<ch<<endl;
	for(int i = s.length()+1; i<=s.length()+k; i++){
		val+=(i)*(ch);
		//cout<<val<<" "<<i<<endl;
	}
	cout<<val;
}
