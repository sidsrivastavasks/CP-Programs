#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x;
	cin>>n>>x;
	int time = 0,cur = 1;
	while(n--)
	{
		int a,b;
		cin>>a>>b;
		time += (a-cur)/x + (a-cur)%x + (b-a);
		cur = b+1;
	}
	cout<<time;
}
