#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	
	ll a,b,c;
	cin>>a>>b>>c;
	
	if(a==0 && b==0){
		cout<<"=";
	}
	else if(abs(a)==b && c%2!=0){
		cout<<"<";
	}
	else if(a==abs(b) && c%2!=0){
		cout<<">";
	}
	else if(a==0 && b>0){
		cout<<"<";
	}
	else if(b==0 && a>0){
		cout<<">";
	}
	else if(abs(a)>abs(b) && c%2==0){
		cout<<">";
	}
	else if(c%2!=0 && a<0 && b>0){
		cout<<"<";
	}
	else if(c%2!=0 && a>0 && b<0){
		cout<<">";
	}
	else if(a>b)cout<<">";
	if(a<0&&b<0&&c%2!=0)
    {
    	if(a<b)cout<<">";
    	if(a>b)cout<<"<";
    	else cout<<"=";
    }
	else{
		cout<<"=";
	}
	
	return 0;
}	
