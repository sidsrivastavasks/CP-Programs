#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a;
	int max = 0,min = 110;
	int posmin = n,posmax=1;
	for(int i = 1; i<=n; i++)
	{
		cin>>a;
		if(a>=max)
		{
			posmax = i;
			max=a;
		}
		if(a<=min)
		{
			posmin = i;
			min=a;
		}
	}
	//cout<<a[posmin]<<" "<<a[posmax];
	if(posmin<posmax)
	{
		cout<<((posmax-1)+((n-1)-posmin));
	}
	else
	{
		cout<<(posmax-1)-(n-posmin);
	}
	return 0;
}
