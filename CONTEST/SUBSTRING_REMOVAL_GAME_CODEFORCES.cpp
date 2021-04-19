#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int l = s.length();
		int n = l+2;
		char ch[n];
		ch[0] = '0';
		ch[n-1] = '0';
		int j = 0;
		for(int i = 1; i<=n-2; i++)
		{
			ch[i] = s[j];
			j++;
		}
		/*for(int i = 0; ch[i]!='\0'; i++)
		{
			cout<<ch[i];
		}*/
		int k = 0;
		for(int i = 0; ch[i]!='\0'; i++)
		{
			if(ch[i]=='0' && ch[i+1]=='1')
			{
				k = i;
				break;
			}
		}
		int count = 0;int q = 0;
		vector<int> v;
		for(int i = k+1; i<n; i++)
		{
			if(ch[i]=='1')
			{
				count++;
			}
			else
			{
				v.push_back(count);
				count = 0;
				continue;
			}
		}
		sort(v.begin(),v.end(),greater<int>());
		int sum = 0;
		for(int i = 0; i<v.size(); i++)
		{
			if(i%2==0)
			{
				sum+=v[i];
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}
