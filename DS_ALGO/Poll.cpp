#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int cnt = 0;
	map<string, int> mp;
	for(int i = 0; i<n; i++){
		string s;
		cin>>s;
		mp[s]++;
		cnt = max(cnt,mp[s]);
	}
	for(auto itr = mp.begin(); itr!=mp.end(); itr++){
		if(itr->second==cnt){
			cout<<itr->first<<endl;
		}
	}
	return 0;
}
