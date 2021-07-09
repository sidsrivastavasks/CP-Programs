#include <bits/stdc++.h>
using namespace std;					
#define ll long long
#define pb push_back
#define mp make_pair
#define endl "\n"
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


void solve(){
	
	ll n,m,i,j;
	cin>>n>>m>>i>>j;
	
	ll x1,x2,y1,y2;
	
	if(i<=n/2){
        x1=x2=n;
    }
    else{
        x1=x2=1;
    }
    if(j<=m/2){
        y1=y2=m;
    }
    else{ 
        y1=y2=1;
    }
    cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
	
	
}

int main(){
	FIO;
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
}
