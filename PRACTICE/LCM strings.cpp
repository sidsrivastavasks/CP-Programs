#include<bits/stdc++.h>
using namespace std;
int gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
int slv(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a,b,mins="",maxs="",maxans="",minans="";
		cin>>a>>b;
		int l1 = min(a.length(),b.length());
		int lcm = slv(a.length(),b.length());
		bool ok = true;
		if(a.length() == l1){
			mins = a;
			maxs = b;
		}
		else{
			mins = b;
			maxs = a;
		}
		int run = lcm/mins.length(),i = 0;
		while(run--){
			minans+=mins;
			//i++;
		}
		i = 0;
		run = lcm/maxs.length();
		while(run--){
			maxans+=maxs;
			//i++;
		}
		for(int i = 0; i<lcm; i++){
			if(maxans[i]!=minans[i]){
				ok = false;
				break;
			}
		}
		if(ok){
			cout<<maxans<<endl;
		}		
		else{
			cout<<"-1"<<endl;
		}
	}
	return 0;
}
