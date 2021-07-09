#include <bits/stdc++.h>
using namespace std;					
#define ll long long
#define pb push_back
#define mp make_pair
#define endl "\n"
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


void solve(){
	
	ll n,m,p1,p2;
	cin>>n>>m>>p1>>p2;
	
	ll a = abs(1-p1)+abs(1-p2);
	ll b = abs(n-p1)+abs(1-p2);
	ll c = abs(1-p1)+abs(m-p2);
	ll d = abs(n-p1)+abs(m-p2);
	
	ll res1 = max(a,b);
	ll res2 = max(c,d);
	ll maxa = max(res1,res2);
	
	if(n==1){
		if(m==1){
			cout<<"1 1 1 1"<<endl;
		}
		else if(m>=2){
			ll op = abs(p1-1)+(p2-1);
			ll pp = abs(p1-n)+abs(p2-m);
			
			ll res = max(op,pp);
			if(res==op){
				cout<<"1 1 1 1"<<endl;
			}
			else{
				cout<<n<<" "<<m<<" "<<n<<" "<<m<<endl;
			}
			
		}
	}
	
	else if(a==maxa){
		cout<<"1 1 1 "<<n<<endl;
	}
	else if(b==maxa){
		cout<<n<<" 1 "<<n<<" "<<m<<endl;
	}
	else if(c==maxa){
		cout<<"1 "<<m<<" "<<n<<" "<<m<<endl;
	}
	else if(d==maxa){
		cout<<n<<" "<<m<<" "<<n<<" 1"<<endl;
	}
	
}

int main(){
	FIO;
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
}
