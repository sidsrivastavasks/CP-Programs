#include<iostream>
using namespace std;


int main()
{
	long long int n,i,N;
	cin>>n;
	long long int sum=0;
	for(i=1; i<n; i++)
	{
		cin>>N;
		sum+=N;
	}
	long long int add = (n*(n+1))/2;
	long long int final = (add-sum);
	cout<<final;
	
	return 0;
}
