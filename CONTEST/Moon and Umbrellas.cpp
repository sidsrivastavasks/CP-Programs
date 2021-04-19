#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int tt;
	tt = 1;
	while(t--){
		int x,y;
		string s;
		cin>>x>>y>>s;
		string str = s;
		bool ok = false;
		int cost = 0;
		if(str[0]=='?'){
			char pp = 'J';
			int pos = str.length();
			for(int i = 0; i<str.length(); i++){
					if(str[i]!='?'){
						pp = str[i];
						pos = i;
						break;
					}			
			}
			for(int i = 0; i<pos; i++){
				str[i] = pp;
			}
		}
		char prev = str[0];
		for(int i = 1; i<str.length(); i++){
			if(prev=='J' && str[i] == '?'){
				str[i] = 'J';				
			}
			else if(prev=='C' && str[i]=='?'){
				str[i] = 'C';
			}
			prev = str[i];
		}
		
		//cout<<str<<endl;
		for(int i = 0; i<str.length()-1; i++){
			if(str[i]=='C' && str[i+1]=='J'){
				cost+=x;
			}
			else if (str[i]=='J' && str[i+1]=='C'){
				cost+=y;
			}
		}
		cout<<"Case #"<<tt<<": "<<cost<<endl;
		tt++;
	}
}
