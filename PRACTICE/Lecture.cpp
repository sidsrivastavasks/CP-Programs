#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	vector<pair<string,string> > v;
	for(int i = 0; i<m; i++){
		string pp,pq;
		cin>>pp>>pq;
		v.push_back(make_pair(pp,pq));
	}
	while(n--){
		string pp;
		cin>>pp;
		string ans = "";
		for(int i = 0; i<v.size(); i++){
			if(pp==v[i].first){
				ans = (v[i].first.length()<=v[i].second.length())? v[i].first:v[i].second;
				cout<<ans<<" ";
				break;
			}
		}
	}
	return 0;
}
