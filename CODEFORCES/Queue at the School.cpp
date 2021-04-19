#include<bits/stdc++.h>
using namespace std;
int main()
{
	int size,numswaps;
	cin>>size>>numswaps;
	string str;
	cin>>str;
	int i = 0;
	while(numswaps--)
	{
		for(int i = 0; i<size-1; i++)
		{
			if(str[i] == 'B' && str[i+1] == 'G')
			{
				swap(str[i],str[i+1]);
				i++;
			}
		}
	}
	cout<<str;
	return 0;
}
