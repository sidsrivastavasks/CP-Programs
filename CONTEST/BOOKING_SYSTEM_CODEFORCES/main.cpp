#include <bits/stdc++.h>
#include <cmath>
#define ll long long
#define pb push_back
#define mp make_pair
#define endl "\n"
#define allb(x) sort((x).begin(), (x).end())
#define allg(x) sort((x).begin(), (x).end(), greater<int>())
using namespace std;
const ll M = 1e9+7;
ll ModExponent(ll p, ll q)
{
	ll int y=0;
	if(q==0){return 1;}
	if(q%2==0)
	{
		y = ModExponent(p,q/2);
		return (y*y)%M;
	}
	else
	{
		y = ModExponent(p,q-1);
		return ((p%M)*(y))%M;
	}

}
void PrimeNumbers()
{
	//time complexity using sieve of Eratoshthenes O(loglogn)

	int n;
	cin>>n;
	int prime[n+1];
	for(int i = 0; i<=n; i++)
	{
		prime[i]=1;
	}
	prime[0]=0;
	prime[1]=0;
	//As the pair repeat after the square root
	//of any number so we will just check till squareroot
	//and update all the multples of the no. to 0
	for(int i = 0; i<=sqrt(n); i++)
	{
		if(prime[i]==1)
		{
			for(int j = 2; i*j<=n; j++)
			{
				prime[i*j]=0;
			}
		}
	}
	//print all index which contains 1
	for(int i = 0; i<=n; i++)
	{
		if(prime[i]==1)
		{
			cout<<i<<" ";
		}
	}
	cout<<"\n";

}
void solvet()
{
	ll t;
	cin>>t;
	while(t--)
	{


	}
}
void solve()
{
    int n;
	cin>>n;
	vector<pair<int, pair<int,int> > >v;
	for(int i = 0; i<n; i++)
	{
		int num,amt;
		cin>>num>>amt;
		v.push_back(make_pair(amt,make_pair(num,i+1)));
	}
	sort(v.begin(),v.end());
	/**for(int i = 0; i<n; i++)
	{
		cout<<v[i].first<<" "<<v[i].second.first<<" "<<v[i].second.second<<endl;
	}**/
	int tables;
	cin>>tables;
	vector<pair< int, int > >table;
	for(int i = 0; i<tables; i++)
	{
		int num;
		cin>>num;
		table.push_back(make_pair(num,i+1));
	}
	sort(table.begin(),table.end());
	int count = 0;int amount = 0;
	vector<pair<int,int> > record;
	for(int i = n-1; i>=0; i--)
	{
		for(int j = 0; j<tables; j++)
		{
			if(v[i].second.first<=table[j].first)
			{
				count++;
				amount+=v[i].first;
				record.push_back(make_pair(v[i].second.second,table[j].second));
				table[j].first = 0;
				break;
			}
		}
	}
	cout<<count<<" "<<amount<<endl;
	for(int i = 0; i<record.size(); i++)
	{
		cout<<record[i].first<<" "<<record[i].second<<endl;
	}
}
int main()
{
    solve();
    return 0;
}
