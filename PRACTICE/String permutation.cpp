#include<bits/stdc++.h>
using namespace std;

void permute(string str)
{
    sort(str.begin(), str.end());
    do {
       cout << str <<" ";
    } while (next_permutation(str.begin(), str.end()));
}
void solve(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	set<char> st;
	string str = "";
	for(int i = 0; i<n; i++){
		if(st.find(s[i]) == st.end()){
			st.insert(s[i]);
			str+=s[i];
		}
	}
	int fact = st.size();
	int res = 1;
	for(int i = 1; i<=fact; i++){
		res*=i;
	}
	cout<<res<<endl;
	permute(str);
	cout<<endl;
}
int main() {
   int t;
   cin>>t;
   while(t--){
   	solve();
   }
}
