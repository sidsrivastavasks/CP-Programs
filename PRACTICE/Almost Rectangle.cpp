#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		char a[n][n];
		vector<pair<int,int> > v;
		for(int i = 0; i<n; i++){
			for(int j = 0; j<n; j++){
				cin>>a[i][j];
				if(a[i][j]=='*'){
					v.push_back(make_pair(i,j));
				}
			}
		}
		if(v[0].first==v[1].first){
			if(v[0].first + 1<n){
				a[v[0].first + 1][v[0].second] = '*';
				a[v[1].first + 1][v[1].second] = '*';
			}
			else{
				a[v[0].first - 1][v[0].second] = '*';
				a[v[1].first - 1][v[1].second] = '*';
			}
		}
		else if(v[0].second==v[1].second){
			if(v[0].second+1<n){
				a[v[0].first][v[0].second+1] = '*';
				a[v[1].first][v[1].second+1] = '*';
			}
			else{
				a[v[0].first][v[0].second-1] = '*';
				a[v[1].first][v[1].second-1] = '*';
			}
		}
		else{
			if(v[0].second<v[1].second){
				a[v[1].first][v[0].second] = '*';
				a[v[0].first][v[1].second] = '*';
			}
			else{
				a[v[0].first][v[1].second] = '*';
				a[v[1].first][v[0].second] = '*';
			}
		}
		for(int i = 0; i<n; i++){
			for(int j = 0; j<n; j++){
				cout<<a[i][j];
			}
			cout<<"\n";
		}
		
		
	}
	return 0;
}
