#include<bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define int long long
#define pb push_back
#define pii pair< int,int >
#define fast ios::sync_with_stdio(0) , cin.tie(0) , cout.tie(0) ;

const int nax = 1e5 + 5;
const int inf = 1e15;
vector<pii> g[nax] ;
vector<int> dist(nax , inf ) , vis(nax, 0);

void dijistra()
{
    priority_queue< pii , vector<pii> , greater<pii >> Q;
    dist[ 1 ] = 0;
    Q.push( {0, 1} );

    while ( !Q.empty() )
    {
        pii p = Q.top();
        Q.pop();
        if ( vis[p.ss] ) continue;

        vis[ p.ss ] = 1;
        for (auto &i : g[p.ss] )
        {
            if ( !vis[i.ff] )
            {

                if ( dist[i.ff] > p.ff + i.ss )
                {
                    dist[i.ff] = p.ff + i.ss;
                    Q.push( { dist[i.ff] , i.ff } );
                }
            }
        }
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
        int n , m;
        cin >> n >> m;
        for (int i = 0 ; i < m ; i++ )
        {
            int u , v, w;
            cin >> u >> v >> w;
            g[u].pb({v, w});
        }
        dijistra();
        for (int i = 1 ; i <= n ; i++ )
            cout << dist[i] << " " ;
    }
}