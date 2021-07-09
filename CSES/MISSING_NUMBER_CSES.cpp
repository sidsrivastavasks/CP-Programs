#include<iostream>

using namespace std;
long long int sum(long long int arr[],long long int n)
{
	long long int i,res = 0;
	for(i=1; i<n; i++)
	{
		res+=arr[i];
	}
	return res;	
}
int main()
{
	long long int n,i;
	cin>>n;
	long long int a[n];
	for(i=1; i<n; i++)
	{
		cin>>a[i];
	}
	long long int add = (n*(n+1))/2;
	long long int comp = sum(a,n);
	long long int final = (add-comp);
	cout<<final;
	
	return 0;
}
