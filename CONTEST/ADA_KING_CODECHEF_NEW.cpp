#include<iostream>
using namespace std;

void solve(int n)
{
	char a[8][8];
	for(int i = 0; i<8; i++)
	{
		for(int j =0; j<8; j++)
		{
			a[i][j] = '.';
		}
	}
	for(int i =0; i<8; i++)
	{
		for(int j = 0; j<8; j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	
}
int main()
{
	int t,k;
	cin>>t;
	while(t--)
	{
		cin>>k;
		solve(k);
	}
return 0;	
}
