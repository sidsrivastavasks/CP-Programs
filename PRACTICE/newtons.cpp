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
void solve()
{
	int n, m, source;
	cin >> n >> m;
	vector<pair<int, int> > g[n + 1]; 	// 1-indexed adjacency list for of graph

	int a, b, wt;
	for (int i = 0; i < m ; i++) {
		cin >> a >> b >> wt;

		g[a].push_back(make_pair(b, wt ));
		g[b].push_back(make_pair(a, wt ));
	}

	//cin >> source;

	source  = 1;
	// Dijkstra's algorithm begins from here
	priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > pq; // min-heap ; In pair => (dist,from)
	vector<int> distTo(n + 1, INT_MAX); 	// 1-indexed array for calculating shortest paths;

	distTo[source] = 0;
	pq.push(make_pair(0, source));	// (dist,from)

	while ( !pq.empty() ) {
		//int dist = pq.top().first;
		int prev = pq.top().second;
		pq.pop();

		vector<pair<int, int> >::iterator it;
		for ( it = g[prev].begin() ; it != g[prev].end() ; it++) {
			int next = it->first;
			int nextDist = it->second;
			if ( distTo[next] > distTo[prev] + nextDist) {
				distTo[next] = distTo[prev] + nextDist;
				pq.push(make_pair(distTo[next], next));
			}
		}

	}

	//cout << "The distances from source, " << source << ", are : \n";
	//ll ans = 0;
	for (int i = 1 ; i <= n ; i++)	{
		if (distTo[i] != INT_MAX)
			cout << distTo[i] << endl;
		else {
			cout << "-1" << endl;
		}
	}
	cout << "\n";

}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	FIO;
	int  t = 1;
	//cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}