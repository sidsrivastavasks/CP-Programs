#include <bits/stdc++.h>
using namespace std;					
#define ll long long
#define endl "\n"
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

void solve()
{
	string s;  
	cin>>s;
	
	int frst = 0, snd = 0, ans = 10;

	for(int i = 0; i<10; i++)
    {
        if(i%2!=0)
        {
            if(s[i]=='0') {
           		continue;
			}            	
            else{
            	frst++;
			}
				
        }
        else
        {
        	if(s[i]=='1'){
        		snd++;	
			}
        }
        int rem = 9-i;
        
        int ch = snd+rem/2;
        if(frst>ch) {
            ans = min(ans,i+1);
            break;
        }
    }
    
	frst = 0,snd = 0;
    for(int i = 0; i<10; i++)
    {
        if(i%2==0)
        {
            if(s[i]=='0'){
            	continue;
			}
            else{
            	snd++;	
			}
        }
        else
        {
            if(s[i]=='1'){
            	frst++;
			} 
				
        }
        int rem = 9-i;
        
        int ch = frst+(rem+1)/2;
        if(snd>ch) 
        {
			ans = min(ans,i+1);
            break;
        }
    }
    
    cout<<ans<<endl;		
}
int main()
{
	FIO;
	ll t;
	cin>>t;
	while(t--)
	{
		solve();
	}
    return 0;
}
