#include <bits/stdc++.h>
#define int long long
#define pb push_back
#define fast_io() ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
void solve()
{
    string s, t;
    cin >> s >> t;
    int n = s.size(), m = t.size();
    string cur1 = s;
    for (int i = 0; i <= n * m; i++)
    {
        string cur2 = t;
        for (int j = 0; j <= n * m; j++)
        {
            if (cur1 == cur2)
            {
                cout << cur1 << "\n";
                return;
            }
            cur2 += t;
        }
        cur1 += s;
    }
    cout << "-1\n";
}
int32_t main() {
    fast_io();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
