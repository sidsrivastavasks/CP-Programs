#include<iostream>
using namespace std;
int main()
{
	int t,n,k,count,i,a;
	cin>>t;
	while(t--)
	{
		count = 0;
		cin>>n>>k;
		for(i=0; i<n; i++)
		{
			cin>>a;
			if(a>k)
			{
				count+= (a-k);
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
