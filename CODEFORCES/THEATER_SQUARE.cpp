#include<iostream>
#include <cmath>
using namespace std;
int main()
{
	double n,m,a;
	long long int res;
	cin>>n>>m>>a;
	res = ceil(n/a)*ceil(m/a);
	cout<<res;
return 0;	
}
