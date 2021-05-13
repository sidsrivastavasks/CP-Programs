#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		string s;
		cin>>n>>s;
		map<char,vector<int> > mp;
		for(int i = 0; i<n; i++){
			mp[s[i]].push_back(i);
		}	
		bool ok = true;
		for(auto itr = mp.begin(); itr!=mp.end(); itr++){
			for(int i = 0; i<(itr->second).size()-1; i++){
				if(abs(itr->second[i] - itr->second[i+1])>=2){
					ok = false;
					break;
				}
			}
			if(!ok){
				break;
			}
		}
		
		if(ok){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
		
	}
	return 0;
}
