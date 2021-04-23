#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	int n = s.length()-1;
	swap(s[0],s[n]);
	swap(s[0],s[1]);
	cout<<s;
	return 0;
}
