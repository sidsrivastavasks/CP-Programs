#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n,m;
    	cin>>n>>m;
    	ll a[n],b[m];
    	int sum1 = 0,sum2=0;
    	for(int i = 0; i<n; i++)
    	{
    		
    		cin>>a[i];
    		sum1+=a[i];
		}
		for(int i = 0; i<m; i++)
		{
			
			cin>>b[i];
			sum2+=b[i];
		}
		ll i = 0,count = 0;
		sort(a,a+n);
		sort(b,b+m);
		bool ok = true;
		while(sum1<=sum2)
		{
			if(a[i]<b[m-1-i])
            {
                sum1+=b[m-1-i]-a[i];
                sum2+=a[i]-b[m-1-i];
                i++;count++;
            }
            else {
            	ok=false;
            	cout<<"-1"<<"\n";
            	break;
            }
		}
		//cout<<sum1<<" "<<sum2<<endl;
		if(ok)
		{
			cout<<count<<endl;
		}
	
	}
	return 0;
}
