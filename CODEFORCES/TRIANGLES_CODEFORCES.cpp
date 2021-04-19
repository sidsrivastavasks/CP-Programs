#include<iostream>
using namespace std;
int main()
{
	int l1,l2,l3,l4;
	cin>>l1>>l2>>l3>>l4;
	int i = ((l1+l2)>l3 || (l1+l2)>l4)? cout<<"TRIANGLE" : ((l1+l2)==l3 || (l1+l2)==l4)? cout<<"SEGMENT" : cout<<"IMPOSSIBLE" ;
return 0;
}
