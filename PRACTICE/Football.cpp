#include<bits/stdc++.h>
using namespace std;
int main(){
	map<string,int> mp;
	int n;
	cin>>n;
	while(n--){
		string s;
		cin>>s;
		mp[s]++;
	}
	int sc = 0;
	string an="";
	for(auto itr=mp.begin(); itr!=mp.end(); itr++){
		if(itr->second>sc){
			sc = itr->second;
			an = itr->first;
		}
	}
	cout<<an;
	return 0;
}
