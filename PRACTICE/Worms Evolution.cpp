#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<pair<int,int> >v;
	for(int i = 0; i<n; i++){
		int pp;
		cin>>pp;
		v.push_back(make_pair(pp,i+1));
	}
	sort(v.begin(),v.end());
	int cnt = 0;
	for(int i = 0; i<n; i++){
		int ptr1 = 0, ptr2=n-1;
		bool ok = false;
		while(ptr1<ptr2){
			if(v[ptr1].first+v[ptr2].first==v[i].first){
				cout<<v[i].second<<" "<<v[ptr1].second<<" "<<v[ptr2].second<<" ";
				ok = true;
				break;
			}
			else if(v[ptr1].first+v[ptr2].first>v[i].first){
				ptr2--;
			}
			else{
				ptr1++;
			}
		}
		if(!ok){
			cnt++;
		}
		else{
			break;
		}
	}
	if(cnt==n){
		cout<<"-1"<<endl;
	}
	
	return 0;
}
