#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	int n;
	cin>>n>>s;
	char prev = s[0];
	int cnt = 0;
	for(int i = 1; i<n; i++){
		if(s[i]==prev){
			prev = s[i];
			cnt++;
		}
		prev = s[i];
	}
	cout<<cnt;
	return 0;
}
