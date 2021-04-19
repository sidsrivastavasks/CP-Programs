#include<bits/stdc++.h>
using namespace std;
int main(){
	string s,t;
	cin>>s>>t;
	bool ok = true;
	map<char,int> mp;
	map<char,int>:: iterator it;
	for(int i = 0; i<s.length(); i++){
		mp[s[i]]++;
	}
	for(int i = 0; i<t.length(); i++){
		it = mp.find(t[i]);
		if(it==mp.end()){
			ok = false;
			break;
		}
		else if(it->second<1){
			ok = false;
			break;
		}
		else{
			(it->second)--;
		}
	}
	if(ok){
		if(s.length()==t.length()){
			cout<<"array";
		}
		else if(s.length()>t.length()){
			string str = "";
			bool ch = false;
			int j = 0;
			int ct = 0;
			for(int i = 0; i<s.length(); i++){
				if(s[i]==t[j])
				{
					ct++;
					ch = true;
					if(j==t.length()){
						break;
					}
					else{
						j++;
					}
				}
			}
			if(ct>=t.length()){
				cout<<"automaton";
			}
			else{
				cout<<"both";
			}
		}
	}
	else{
		cout<<"need tree";
	}
}
