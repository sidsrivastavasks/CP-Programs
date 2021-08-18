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
typedef pair<ll, ll>		pll;
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


ll ncr(ll n, ll r) {
	if (r > n - r) r = n - r; // because C(n, r) == C(n, n - r)
	long long ans = 1;
	ll i;

	for (i = 1; i <= r; i++) {
		ans *= n - r + i;
		ans /= i;
	}

	return ans;
}

void solve()
{

	ll n, q;
	cin >> n >> q;

	ll a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	vector<pair<ll, ll> > v(n);
	//first -> even, second -> odd
	if (a[n - 1] % 2 == 0) {
		v[n - 1].first = 1;
		v[n - 1].second = 0;
	}
	else {
		v[n - 1].first = 0;
		v[n - 1].second = 1;
	}

	for (int i = n - 2; i >= 0; i--) {
		if (a[i] % 2 == 0) {
			v[i].first = v[i + 1].first + 1;
			v[i].second = v[i + 1].second;
		}
		else {
			v[i].first = v[i + 1].first;
			v[i].second = v[i + 1].second + 1;
		}
	}

	// for (int i = 0; i < n; i++) {
	// 	cout << v[i].first << " " << v[i].second << endl;
	// }

	while (q--) {
		ll x, y;
		cin >> x >> y;

		x--;
		ll eve = 0, odd = 0;

		if (y == n)
			eve = v[x].first,
			odd = v[x].second;

		else
			eve = v[x].first - v[y].first,
			odd = v[x].second - v[y].second;


		ll ans = eve / 3;
		ans += ((odd * (odd - 1)) / 2) * eve;


		cout << ans << endl;


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