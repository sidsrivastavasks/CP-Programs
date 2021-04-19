#include<iostream>
using namespace std;
#define ll long long 
ll DigitSum(ll n)
{
	ll temp = 0;
		while(n>0)
			{
				temp+=n%10;
				n = n/10;
			}
return temp;			
}
int main()
{
	ll t,n,a,b;
	cin>>t;
	while(t--)
	{
		ll temp = 0,count = 0;
		cin>>n;
		while(n--)
		{
			cin>>a>>b;
			ll chef = DigitSum(a);
			ll morty = DigitSum(b);	
			if(chef>morty)
			{
				temp++;
			}
			else if(morty>chef)
			{
				count++;
			}
			else
			{
				temp++;
				count++;
			}		
		}
		if(temp>count)
		{
			cout<<"0"<<" "<<temp<<endl;
		}
		else if(count>temp)
		{
			cout<<"1"<<" "<<count<<endl;
		}
		else if(count==temp)
		{
			cout<<"2"<<" "<<temp<<endl;
		}
	}
	return 0;
}
