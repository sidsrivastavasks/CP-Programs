#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int x,y,z;
	x = y = z = 0;
	int a,count = 0;
	for(int i = 0; i<n; i++)
	{
		for(int j = 0; j<3; j++)
		{
			cin>>a;
			if(count == 0)x+=a;
			else if(count == 1)y+=a;
			else z+=a;
			
			count++;
		}
		count = 0;
	}
	if(x==0 && y==0 && z==0)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	return 0;
}
