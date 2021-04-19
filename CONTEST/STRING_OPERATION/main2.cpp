#include <bits/stdc++.h>
using namespace std;
bool check(string str1, string str2)
{
    int onea = 0,oneb = 0;
    int l = str1.length();
    for(int i = 0; i<l; i++)
    {
        if(str1[i]=='1')
            onea++;
        if(str2[i]=='1')
            oneb++;
    }
    if(onea%2==0 && oneb%2==0)
    {
        reverse(str1.begin(), str1.end());
        if(str1.compare(str2)==0)
        {
            return true;
        }
    }
    return false;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int l = s.length();
		map<string,int> mp;
		for (int i = 0; i < l; i++) {
		    string str = "";
            for (int len = 1; len <= l - i; len++)
            {
                str = s.substr(i, len);
                mp[str]++;
            }
		}
		/**for(auto itr = mp.begin(); itr!=mp.end(); itr++)
        {
            cout<<itr->first<<" "<<itr->second<<endl;
        }**/
    	int maplen = mp.size();
    	int counter = 0,verif = 0;
    	for(auto itr = mp.begin(); itr!=mp.end(); itr++)
    	{
        	for(auto ptr = mp.begin(); ptr!=mp.end(); ptr++)
        	{
            	if(counter!=verif)
            	{
                	string str1 = itr->first;
                	string str2 = ptr->first;
                	if(str1.length()==str2.length())
                	{
                    	if(check(str1,str2))
                        	mp.erase(ptr->first);
                	}
            	}
            	verif++;
        	}
        	counter++;
        	verif = 0;
    	}
    	cout<<mp.size()<<endl;
	}
	return 0;
}
