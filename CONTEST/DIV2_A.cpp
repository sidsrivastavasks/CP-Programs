#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll t;
	cin>>t;
	while(t--)
	{
		ll r,g,b,w;
		ll a[4];
		cin>>r>>g>>b>>w;
		ll mina = min(r,g);
		ll minf = min(mina,b);
		a[0] = r-minf; a[1] = g-minf; a[2] = b-minf; a[3] = w+(3*minf);
		int count = 0;
		for(int i = 0; i<4; i++)
		{
			if(a[i]%2==1)
			{
				count++;
			}
		}
		if(count==0||count==1)
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;	
		}
	}
	return 0;
}
