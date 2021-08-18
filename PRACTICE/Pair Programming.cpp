#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define endl "\n"
#define ld long double
#define allb(x) sort((x).begin(), (x).end())
#define allg(x) sort((x).begin(), (x).end(), greater<int>())
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
const ll M = 1e9 + 7;
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pll;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pll>		vpll;

int power(int a, int b) {
	if (b == 0) return 1;
	int temp = power(a, b / 2);
	int result = temp * temp;
	if (result % 2 == 1) result *= a;
	return result;
}
ll ModExponent(ll p, ll q)
{
	ll int y = 0;
	if (q == 0) {return 1;}
	if (q % 2 == 0)
	{
		y = ModExponent(p, q / 2);
		return (y * y) % M;
	}
	else
	{
		y = ModExponent(p, q - 1);
		return ((p % M) * (y)) % M;
	}

}
bool is_prime(int a)
{
	for (int i = 2; i * i <= a; i++) {
		if (a % i == 0) {
			return false;
		}
	}
	return true;
}
void PrimeNumbers()
{
	//time complexity using sieve of Eratoshthenes O(loglogn)

	int n;
	cin >> n;
	int prime[n + 1];
	for (int i = 0; i <= n; i++)
	{
		prime[i] = 1;
	}
	prime[0] = 0;
	prime[1] = 0;
	//As the pair repeat after the square root
	//of any number so we will just check till square root
	//and update all the multiples of the no. to 0
	for (int i = 0; i <= sqrt(n); i++)
	{
		if (prime[i] == 1)
		{
			for (int j = 2; i * j <= n; j++)
			{
				prime[i * j] = 0;
			}
		}
	}
	//print all index that contains 1
	for (int i = 0; i <= n; i++)
	{
		if (prime[i] == 1)
		{
			cout << i << " ";
		}
	}
	cout << "\n";

}
void solve()
{
	int k, n, m;
	cin >> k >> n >> m;

	int a[n], b[m];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}

	int ptr1 = 0, ptr2 = 0;
	vi ans;
	bool ok = true;
	while (ptr1 < n && ptr2 < m) {

		if (a[ptr1] == 0) {
			ptr1++;
			k++;
			ans.pb(0);
		}
		else if (b[ptr2] == 0) {
			ptr2++;
			k++;
			ans.pb(0);
		}
		else {

			if (a[ptr1] <= k) {
				ans.pb(a[ptr1]);
				ptr1++;
			}
			else if (b[ptr2] <= k) {
				ans.pb(b[ptr2]);
				ptr2++;
			}
			else {
				ok = false;
				break;
			}
		}

	}

	if (ok) {
		if (ptr1 < n) {
			while (ptr1 < n) {
				if (a[ptr1] == 0) {
					k++;
					ans.pb(0);
				}
				else if (a[ptr1] <= k) {
					ans.pb(a[ptr1]);
				}
				else {
					ok = false;
					break;
				}
				ptr1++;
			}
		}
		else {
			while (ptr2 < m) {
				if (b[ptr2] == 0) {
					k++;
					ans.pb(0);
				}
				else if (b[ptr2] <= k) {
					ans.pb(b[ptr2]);

				}
				else {
					ok = false;
					break;
				}
				ptr2++;
			}
		}
	}

	if (!ok) {
		cout << "-1" << endl;
	}
	else {
		int run = ans.size();
		for (int i = 0; i < run; i++) {
			cout << ans[i] << " ";
		}
		cout << endl;
	}

}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	FIO;
	ll t;
	cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}