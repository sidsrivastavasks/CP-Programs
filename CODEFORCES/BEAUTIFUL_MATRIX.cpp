#include <bits/stdc++.h>
using namespace std;

int main() {
	int a[100][100];
	int i,j;
	int pos = 0;
	int pos1 = 0;
	for( i = 1; i<=5; i++)
	{
		for( j = 1; j<=5; j++)
		{
			cin>>a[i][j];
			if(a[i][j]==1)
			{
				pos = i;
				pos1 = j;
			}
		}
	}
	int count = abs(pos-3)+abs(pos1-3);
	cout<<count;
	return 0;
}
