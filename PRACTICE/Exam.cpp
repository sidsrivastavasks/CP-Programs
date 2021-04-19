#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n<=3)
	{
		if(n==3)
		{
			cout<<"2"<<endl;
			for(int i = 1; i<=n; i++)
			{
				if(i%2!=0)
				{
					cout<<i<<" ";
				}
			}
		}
		else
		{
			cout<<"1"<<endl;
			cout<<"1";
		}
	}
	else if(n==4)
    	cout<<"4\n"<<"3 1 4 2";
	else{
		cout<<n<<endl;
		for(int i = 1; i<=n; i++)
		{
			if(i%2!=0)
			{
				cout<<i<<" ";
			}	
		}
		for(int i = 1; i<=n; i++)
		{
			if(i%2==0)
			{
				cout<<i<<" ";
			}
		}		
	}
return 0;
}
