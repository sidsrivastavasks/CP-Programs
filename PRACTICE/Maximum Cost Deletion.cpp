#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void pacheesdinmelwdadouble(){
	
	int n,a,b;
	cin>>n>>a>>b;
	string s;
	cin>>s;
	
	int ptr1 = 1,ptr2 = 1;
	if(b>=0){
		cout<<(a+b)*n<<endl;
	}
	else{
		
		if(s[0]=='0'){
			ptr1++;
		}
		else{
			ptr2++;
		}
			
		for(int i = 1; i<n; i++)
		{
			if(s[i]=='0' && s[i-1]=='1'){
				ptr1++;
			}
			else if(s[i]=='1' && s[i-1]=='0')
			{
				ptr2++;
			}
		}
		int pp = a*n;
		int op = b*(min(ptr1,ptr2));
		cout<<pp+op<<endl;
	}
	
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
