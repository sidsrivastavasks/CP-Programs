#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	string s;
	cin>>n;
	s = to_string(n);
	//cout<<s<<endl;
	bool ok = true,fin=false;
	for(int i = 0; i<s.length(); i++){
		
		if(s[i]-'0' != 4 && s[i]-'0' !=7){
			ok = false;
			//cout<<"1";
			fin = true;
			break;
		}
	}
	//cout<<n<<endl;
	if(fin && !ok)
	{
		if(n%4==0 || n%7==0){
			ok =true;	
		}
	}
	if(ok){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}
