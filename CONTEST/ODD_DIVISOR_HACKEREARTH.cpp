#include<iostream>
using namespace std;
int main()
{
	long long int t,n,m,i;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		long long int sum=0,a=0,b=0;
		
		for(i=1;i<=n;i++)
		{
  			if(i%2!=0)
  				{a+=i;}
  			else
  				{b+= (i/2);}
		}
		sum = a+b;
		cout<<sum%m<<endl;
	}
return 0;	
}
