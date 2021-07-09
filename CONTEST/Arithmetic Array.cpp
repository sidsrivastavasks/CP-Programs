#include <bits/stdc++.h>
using namespace std;					
#define ll long long
#define pb push_back
#define mp make_pair
#define endl "\n"
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


void solve(){
	
	int n;
	cin>>n;
	int a[n];
	int sum = 0;
	for(int i = 0; i<n; i++){
		cin>>a[i];
		sum+=a[i];
	}
	
	if(sum%n==0 && sum/n==1){
		cout<<"0"<<endl;
	}
	else if(sum<n){
		cout<<"1"<<endl;
	}
	else{
		cout<<sum-n<<endl;
	}
	
}

int main(){
	//FIO;
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
}
