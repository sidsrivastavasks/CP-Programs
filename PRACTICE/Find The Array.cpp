#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void pacheesdinmelwdadouble(){
	
	int s;
	cin>>s;
	int pp=sqrt(s);
	
	if((pp*pp)==s)
		cout<<pp<<endl;
	else
		cout<<pp+1<<endl;
	
}

int main(){
	
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	ll t;
	cin>>t;
	while(t--){
		pacheesdinmelwdadouble();
	}
	
	return 0;
}
