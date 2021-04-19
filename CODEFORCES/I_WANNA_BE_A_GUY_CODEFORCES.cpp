#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	set<int> s;
	cin>>n;
	int p;
	cin>>p;
	for(int i = 0; i<p; i++)
	{
		int temp;
		cin>>temp;
		s.insert(temp);
	}
	int k;
	cin>>k;
	for(int i = 0; i<k; i++)
	{
		int temp;
		cin>>temp;
		s.insert(temp);
	}
	if(s.size()!=n)
	{
		cout<<"Oh, my keyboard!";
	}
	else
	{
		cout<<"I become the guy.";
	}
	return 0;
}
