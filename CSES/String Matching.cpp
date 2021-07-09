#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	string str,sub;
	cin>>str>>sub;
	//map<string, int> mp;
	ll cnt = 0;
	for(int i = 0; i<str.length()-sub.length(); i++){
		if(sub[0]==str[i]){
			int pp = i;bool ok = true;
			for(int j = 0; j<sub.length(); j++){
				if(sub[j]!=str[pp]){
					ok = false;
					break;
				}
				pp++;
			}
			if(ok){
				cnt++;
			}
		}
	}
	cout<<cnt;
	return 0;
}
