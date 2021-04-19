#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void print(int k)
{
	char a[8][8];
	for(int i = 0; i<8; i++)
	{
		for(int j=0; j<8; j++)
		{
			a[i][j] = 'X';
		}
	}
	int m = 0;
	for(int i =0; i<8; i++)
	{
		for(int j=0; j<8; j++)
		{
			m++;
			a[i][j] = '.';
			if(m==k)
			{
				break;
			}
		}
		if(m==k)
		{
			break;
		}
	}
	a[0][0] = 'O';
	for(int i = 0; i<8; i++)
	{
		for(int j=0; j<8; j++)
		{
			cout<<a[i][j];
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
		print(k);
	}
return 0;	
}
