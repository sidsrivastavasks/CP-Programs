#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,l;
	cin>>n>>l;
	vector<string> v;
	while(n--){
		string str="";
		cin>>str;
		v.push_back(str);
	}
	for(int i = 0; i<v.size(); i++){
		for(int j = 0; j<v.size(); j++){
			if(v[i]<v[j]){
				swap(v[i],v[j]);
			}
		}	
	}
	
	for(int i = 0; i<v.size(); i++){
		cout<<v[i];
	}
	return 0;
}
