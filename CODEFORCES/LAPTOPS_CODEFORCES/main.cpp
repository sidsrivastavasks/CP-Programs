#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
//#define for(a,k) for(int i = a; i<k; i++)
using namespace std;

int main()
{
    ll t;
    cin>>t;
    int k = t;
    vector<pair<int,int>>v;
    while(t--)
    {
        int n,m;
    	cin>>n>>m;
    	v.pb(mp(n,m));
    }
    sort(v.begin(),v.end());
    int flag = 0;
    //int temp = v[0].second;
    for(int i = 0; i<k; i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    for(int i = 0; i<k; i++)
    {
        if(v[i].second>v[i+1].second)
        {
            flag = 1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"Happy Alex";
    }
    else if(flag==0)
    {
        cout<<"Poor Alex";
    }
    return 0;
}
