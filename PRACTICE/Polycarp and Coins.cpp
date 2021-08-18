#include <bits/stdc++.h>
using namespace std;					
#define ll long long
#define pb push_back
#define mp make_pair
#define endl "\n"
#define ld long double
#define vl vector<long long>
#define allb(x) sort((x).begin(), (x).end())
#define allg(x) sort((x).begin(), (x).end(), greater<int>())
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

void solve()
{
	ll n;
	cin>>n;
	ll md = n%3;
	ll on = 0, tw = 0;
	if(md==1){
		on++;
	}
	else if(md==2){
		tw++;
	}
	
	tw+= n/3;
	on+= n/3;
	
	cout<<on<<" "<<tw<<endl;
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
