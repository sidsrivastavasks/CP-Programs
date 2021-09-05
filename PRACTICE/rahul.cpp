#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool fun(char x)
{
	if (x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U')
		return true;
	else
		return false;
}
void solve()
{
	ll n;
	string s;
	cin >> s;
	n = s.length();
	ll vow = 0, cons = 0;
	for (ll i = 0; i < n; i++)
	{
		if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
			vow++;
		else
			cons++;
	}


	ll d = 9999;

	if (((vow > 0) && (cons == 0)) || ((cons > 0) && (vow == 0))) {
		d = n;
	}

	for (ll i = 0; i < n; i++)
	{
		ll count = 0;
		for (ll j = 0; j < n; j++)
		{
			if (s[i] != s[j])
			{
				if (fun(s[i]) && fun(s[j]))
					count += 2;
				else if (!fun(s[i]) && !fun(s[j]))
					count += 2;
				else count++;
			}
		}
		if (count < d)
			d = count;
	}
	cout << d << "\n";


}
int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	ll t;
	cin >> t;
	for (ll tt = 1; tt <= t; tt++)
	{
		cout << "Case #" << tt << ": ";
		solve();
	}
	return 0;
}