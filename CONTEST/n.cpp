#include<iostream>
using namespace std;
int main()
{
	int i,n;
	for(i=0; i<5; i++)
	{
		cin>>n;
		if(n==0)
		{
			cout<<i+1;
			break;
		}
	}
return 0;	
}
