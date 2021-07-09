#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	string ans[] = {"AC","WA","TLE","RE"};
	vector<int> a(4,0);
	while(n--){
		string s;
		cin>>s;
		if(s==ans[0]){
			a[0]++;
		}
		if(s==ans[1]){
			a[1]++;
		}
		if(s==ans[2]){
			a[2]++;
		}
		if(s==ans[3]){
			a[3]++;
		}
	}
	for(int i = 0; i<4; i++){
		cout<<ans[i]<<" x "<<a[i]<<endl;
	}
	return 0;
}
