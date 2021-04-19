#include <bits/stdc++.h> 
using namespace std;
long long int power(long long int x, long long int y) 
{ 
	if (y == 0) 
        return 1; 
    else if (y%2 == 0) 
        return power(x, y/2)*power(x, y/2); 
    else
        return x*power(x, y/2)*power(x, y/2); 
} 

int main() {
	long long int t;
    cin>>t;
    
    while(t--)
    {
        long long int toms,jerys,count,ans = 0,m,res;
        cin>>toms;
        m = toms;
        if(toms%2!=0)
        {
        	ans = (toms-1)/2;
		}
		else
		{
			count = 0;
        	while(toms%2==0)
        	{
        		toms/=2;
        		count ++;
			}
			
			jerys = power(2,count+1);
			res = m/jerys;
			
			ans = res;
    	}	
         cout<<ans<<endl;
    }
	return 0;
}
