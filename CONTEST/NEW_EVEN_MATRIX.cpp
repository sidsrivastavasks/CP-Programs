#include<iostream>
using namespace std;
long long int mat[1001][1001];
int main()
{
	long long int t,i,j,n,b;
	cin>>t;
	while(t--)
	{
		cin>>n;
		b = 1;
		for(i=0; i<n; i++)
		{
			for(j=0; j<n; j++)
			{
				mat[i][j] = b;
				b++;	
			}
		}
		
		for(i=0; i<n; i++)
		{
			if(i%2==0)
			{
				for(j=0; j<n; j++)
				{
					cout<<mat[i][j]<<" ";
				}
			cout<<endl;
			}
			else
			{
				for(j=n-1; j>=0; j--)
				{
					cout<<mat[i][j]<<" ";
				}
			cout<<endl;
			}
		}
	}
	return 0;
}
