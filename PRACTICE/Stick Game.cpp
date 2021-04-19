#include <iostream>
using namespace std;

int main() {
	int k,m;
	cin>>k>>m;
	int n = min(k,m);
	if(n%2==0)
	{
		cout<<"Malvika";
	}
	else
	{
		cout<<"Akshat";
	}
	return 0;
}
