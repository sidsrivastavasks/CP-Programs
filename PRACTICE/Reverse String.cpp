#include <bits/stdc++.h>
using namespace std;					
#define ll long long
#define endl "\n"
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

void solve()
{
	string s,t;
	cin>>s>>t;
	int n = s.length(), m = t.length();
	bool ok = false;
	for (int i = 0; i <n; i++) {
		
		if (s[i] == t[0]) {
			int res = 0 , ptr1 = i , ptr2 = 0;
			while (ptr1 < n && ptr2 < m && s[ptr1] == t[ptr2]) {
				ptr1++;
				ptr2++;
				res++;
			}
			ptr1 -= 2;
			while (ptr1 >= 0 && ptr2 < m && s[ptr1] == t[ptr2]) {
				ptr1--;
				ptr2++;
				res++;
			}
			if (res == m) {
				ok = true;
				break;
			}
		}
	}
	if(ok){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;		
	}
}
int main()
{
	FIO;
	ll t;
	cin>>t;
	while(t--)
	{
		solve();
	}
    return 0;
}
