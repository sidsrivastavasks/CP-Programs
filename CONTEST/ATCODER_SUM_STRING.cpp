#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define charToInt(c) (c-'0')
int main() {
	string s;
	cin>>s;
	ll sum = 0;
	for(ll i = 0; i<s.length(); i++)
	{
		int a = charToInt(s[i]);
		sum+=a;
	}
	if(sum%9==0)
	{
		cout<<"Yes";
	}
	else
	{
		cout<<"No";
	}
	return 0;
}
