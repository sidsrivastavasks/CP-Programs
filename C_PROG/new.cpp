#include<iostream>

using namespace std;

int main()
{
	string s;
	int i;
	cin>>s;
    string ans="YES";
    int l= s.length();
	for(i=0; i<l/2; i++)
	{
		if(s[i]!=s[l-1-i]){
		    ans="NO";
			break;
		}
		
	} 
	cout<<ans; 	
return 0;	
}
