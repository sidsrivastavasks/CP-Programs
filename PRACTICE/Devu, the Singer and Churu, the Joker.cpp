#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,d;
	cin>>n>>d;
	int sum = 0;
	for(int i = 0; i<n; i++)
	{
		int a;
		cin>>a;
		sum+=a;
	}
	//cout<<sum<<"\n";
	if((sum+(n-1)*10)>d)
	{
		cout<<"-1";
	}
	else
	{
		cout<<(d-sum)/5;
	}
	return 0;
}
