#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	//write your code here
    	string s;
    	int n;
    	cin>>n;
    	cin>>s;
    	int one = 0,zero=0;
    	for(int i = 0; s[i]!='\0'; i++ )
        {
            if(s[i]=='1')
            {
                one++;
            }
            else
            {
                zero++;
            }
        }
        while(zero--)
        {
            cout<<"0";
        }
        while(one--)
        {
            cout<<"1";
        }
        cout<<endl;
    }
    return 0;
}
