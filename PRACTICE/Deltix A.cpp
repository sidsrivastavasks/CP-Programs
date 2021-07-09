#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){
	
	ll n,m;
	string s;
	cin>>n>>m;
	cin>>s;
	
	
	ll zr = 0;
	for(int i = 0; i<n; i++){
		if(s[i]=='0'){
			zr++;
		}
	}
	
	int p = min(n,m);

	while(p--){	
		
		string str = "";
		if(s[0]=='0' && s[1]=='1'){
			str+='1';
			zr--;
		}
		else{
			str+=s[0];
		}
		
		for(int i = 1; i<n-1; i++){
			
			if(s[i]=='0'){
				
				if(s[i+1]=='1' && s[i-1]=='1'){
					
					str+=s[i];
				
					
					
				}
				else if(s[i+1]=='1' || s[i-1]=='1'){
					
					str+='1';
					zr--;
					
				}
				else{
					
					str+=s[i];
					
				}
			}
			else{
				
				str+=s[i];
				
			}
			
			
		}
		
		if(s[n-1]=='0' && s[n-2]=='1'){
			str+='1';
			zr--;
		}
		else{
			str+=s[n-1];
		}
		
		s = str;
		if(zr<=0){
			
			break;
		}
		
		
	}
	
	cout<<s<<endl;
	
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
