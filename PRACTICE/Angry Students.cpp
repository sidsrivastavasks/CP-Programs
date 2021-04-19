#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s = "";
		cin>>s;
		int count = 0,ans = 0;
		bool ok = false;
		for(int i = 0; i<n; i++)
		{
			if(s[i]=='A')
			{
				if(!ok)
					ok = true;
				else{
					//ans = max(ans,count);
					count = 0;}
			}
			else if(ok && s[i]=='P')
			{
				count++;
				ans = max(ans,count);
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
