#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define endl "\n"
#define ld long double
#define allb(x) sort((x).begin(), (x).end())
#define allg(x) sort((x).begin(), (x).end(), greater<int>())
const ll M = 1e9+7;
int main(){
	int n;
	cin>>n;
	map<char,pair<int,int> > mymp;
	map<char,pair<int,int> > :: iterator it;
	int cnt = 1;
	string str="";
	for(int i = 0; i<n; i++){
		string s;
		getline(cin,s);
		bool rgt = false;
		for(int j = 0; j<s.length(); j++){
			if(!isspace(s[j])&& rgt && s[j]=='-'){
				break;
			}
			if(!isspace(s[j]) && s[j]=='|'){
				rgt = true;
				continue;
			}
			if(!isspace(s[j]) && !rgt && s[j]!='-'){
				mymp.insert({(s[j]),(make_pair(cnt,0))});
				str+=s[j];
			}
			else if(rgt){
				if(!isspace(s[j])){
                        char ch = s[j];
					it = mp.find(ch);
					(it->second).second = cnt;
				}
			}
		}
		cnt++;
	}
	sort(str.begin(),str.end());
	int t;
	cin>>t;
	int ptr1 = 0;
	while(t--){
		int strt,end;
		cin>>strt>>end;
		it = mp.find(str[ptr]);
		if((it->second).first==strt && (it->second).second<end){
			cout<<
		}
		ptr++;
	}
}
