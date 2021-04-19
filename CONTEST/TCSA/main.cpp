#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll t;
	scanf("%lld",&t);
	vector<ll> v;
	ll a[t];
	for(int i = 0; i<t; i++){
        ll p;
        scanf("%lld",&p);
        v.push_back(p);
        a[i] = -1;
	}
	ll n;
	scanf("%lld",&n);
	set<ll> s;
	for(int i = 0; i<n; i++){
        ll z,k;
        scanf("%lld%lld",&z,&k);
        ll x = min(z,k)-1;
        ll y = max(z,k)-1;

        if((s.count(x)) && (s.count(y))){
            continue;
        }
        if(a[x]==(-1) && a[y]==(-1)){
            a[x] = y;
            a[y] = x;
        }
        else if (a[x] != -1 && a[y] == -1){
            if (a[x] < y){
                a[a[x]] = y;
                a[y] = x;
            }
            else{
                a[y] = a[x];
                a[x]= y;
            }
        }
        else if(a[x] == -1 && a[y] != -1){
            if(a[y]>x){
                a[y] = y;
                a[a[y]] = x;
            }
            else{
                a[a[y]] = x;
                a[x] = y;
            }
        }
        else{
            if(a[x]==a[y]){
                if(a[x]>y){
                    a[x] = y;
                    a[a[y]] = x;
                }
                else{
                    a[a[x]] = y;
                    a[y] = x;
                }
            }
            else if(a[x]>a[y]){
                a[x] = y;
                a[a[y]] = x;
            }
            else if(a[x]<a[y]){
                a[a[y]] = a[x];
                a[a[x]]=y;
                a[x] = a[y];
            }
        }
        s.insert(x);
        s.insert(y);
	}

	set<ll> st;
	ll ans = 0;
    for(int i = 0; i<t; i++){
        ll current = 0;
        if(st.count(i)){
            continue;
        }
        st.insert(i);
        if(a[i]==-1){
            current = v[i];
        }
        else{
            ll j = a[i];
            current = v[i];
            while(!st.count(j)){
                current+=v[j];
                st.insert(j);
                j = a[j];
            }
        }
        ans = max(ans,current);
    }
    cout<<ans;
    return 0;
}
