#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	bool ok = true;
	for(int i = 0; i<n; i++)
	{
		if(i%2==0)
		{
		
			for(int j = 0; j<m; j++)
			{
				cout<<"#";
			}
			cout<<endl;
		}
		else
		{
			for(int j = 0; j<m; j++)
			{  
			 	if(ok==true && j==m-1)
				{
					cout<<"#";
				}
				else if(!ok && j==0)
				{
					cout<<"#";
				}
				else
				{
					cout<<".";
				}
			}
			cout<<endl;
			if(ok)
				ok = false;
			else
				ok = true;	
		}

	}
	return 0;
}
