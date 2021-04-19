#include <iostream>
using namespace std;

int main() {
	int m,n;
	cin>>m>>n;
	int mul = m*n;
	if(mul%2==0)
	{
		cout<<mul/2<<endl;
	}
	else
	{
		cout<<(mul-1)/2<<endl;
	}
	return 0;
}
