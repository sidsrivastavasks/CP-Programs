#include<iostream>
using namespace std;
int main()
{
	int t,a,b,res;
	cin>>t;
	while(t--)
	{
		res = 0;
		cin>>a>>b;
		if(a>b && 2*b==a)
		{
			cout<<b<<endl;
		}
		else if(b>a && 2*a==b)
		{
			cout<<a<<endl;
		}
		else if(a==b)
		{
			res = (a+b)/3;
			cout<<res<<endl;
		}
		else if(a>b && 2*b<=a)
		{
			if(a%2==0 && b>=a/2)
			{
				res = (a/2);
				cout<<res<<endl;
			}
			else
			{
				res = (a/2)+1;
				cout<<res<<endl;
			}
		}
		else if(b>a && 2*a<=b)
		{
			if(b%2==0 && a>=b/2)
			{
				res = (b/2);
				cout<<res<<endl;
			}
			else
			{
				res = (b/2)+1;
				cout<<res<<endl;
			}
		}
	}
	return 0;
}
