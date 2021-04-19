#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp makepair
bool ok(string a,ll d){
	while(a.length()>=0){
		ll k = stoi(a); 
		if(k<=0){
			return false;
		}
		if(k%d==0){
			return true;
		}
		//cout<<a<<endl;
		for(int i =0; i<a.length(); i++){
			if(a[i]-'0'==d){
				return true;
			}
		}
		ll myint1 = stoi(a);
		myint1-=d;
		a = to_string(myint1); 
	}
	return false;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,d;
		cin>>n>>d;
		//set<int> s;
		ll a[n];
		for(int i = 0; i<n; i++){
			string pp;
			cin>>pp;
			if(ok(pp,d)){
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
		}
	}
}	
