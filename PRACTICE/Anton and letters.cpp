#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	int l = s.length();
//	sort(s,s+l);
int count = 0;
sort(s.begin(),s.end());
	//cout<<s;
	for(int i = 0; i<l-1; i++)
	{
		
		if(!isspace(s[i]) && s[i]!=s[i+1] && s[i]!='}' && s[i]!='{' && s[i]!=',')
		{
			count++;
		}
	}
	cout<<count;
	return 0;
}
