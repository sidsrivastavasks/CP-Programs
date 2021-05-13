#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(ll n){
	
	if(n==1||n==2){
	  cout<<-1<<endl;
	}
	else{
	    int op = 1;
	    for(int i=0;i<n;i++){
	    	
	    	for(int j=0;j<n;j++){
	    		
	        	cout<<op<<" ";
	        	if(op+2>n*n)
					op = 2;
	        	else 
					op+=2;
		    }
		    cout<<endl;
		}
	}
}

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		solve(n);
	}
}
