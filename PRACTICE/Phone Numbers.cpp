#include<bits/stdc++.h>
#include <string> 
using namespace std;
bool checktaxi(string s)
{
	for(int i = 0; i<s.length()-1; i++)
	{
		if(i!=2 and i!=5 and s[i]!=s[0])
            return false;
	}
	return true;
}
bool checkpzz(string s)
{
	if(s[0]>s[1] and s[1]>s[3] and s[3]>s[4] and s[4]>s[6] and s[6]>s[7])
        	return true;
        	
	return false;
}

int main()
{
	int n,t = 0;
	cin>>n;
	vector<pair<int,string> >taxi;
	vector<pair<int,string> >pzz;
	vector<pair<int,string> >girl;
	while(t<n)
	{
		string ch = "";
		int siz = 0;
		cin>>siz>>ch;
		bool taxicnt = 0,pizcnt = 0,grlcnt = 0;
		for(int i = 0; i<siz; i++)
		{
			string ph = "";
			cin>>ph;
			if(checktaxi(ph)){
				taxicnt++;
			}
			else if(checkpzz(ph)){
				pizcnt++;
			}
			else{
				grlcnt++;
			}
		}
		taxi.push_back(make_pair(taxicnt,ch));
		pzz.push_back(make_pair(pizcnt,ch));
		girl.push_back(make_pair(grlcnt,ch));
		t++;
	}
	vector<string> ans1,ans2,ans3;
	sort(taxi.rbegin(),taxi.rend());
	sort(pzz.rbegin(),pzz.rend());
	sort(girl.rbegin(),girl.rend());
	int maxt = taxi[0].first, maxp = pzz[0].first, maxg = girl[0].first;
	cout<<"If you want to call a taxi, you should call: ";
	for(int i = 0; i<taxi.size()-1; i++)
	{
		if(taxi[i].first>=maxt)
			ans1.push_back(taxi[i].second);
	}
	for(int i = 0; i<ans1.size()-1; i++)
	{
		cout<<ans1[i]<<","<<" ";
	}
	cout<<ans1[ans1.size()-1]<<"."<<endl;
	cout<<"If you want to order a pizza, you should call: ";
	for(int i = 0; i<pzz.size()-1; i++)
	{
		if(pzz[i].first==maxp)
			ans2.push_back(pzz[i].second);
		else
			break;
	}
	for(int i = 0; i<ans2.size()-1; i++)
	{
		cout<<ans2[i]<<","<<" ";
	}
	cout<<ans2[ans2.size()-1]<<"."<<endl;
	cout<<"If you want to go to a cafe with a wonderful girl, you should call: ";
	for(int i = 0; i<girl.size()-1; i++)
	{
		if(girl[i].first==maxg)
			ans3.push_back(girl[i].second);
		else
			break;
	}
	for(int i = 0; i<ans3.size()-1; i++)
	{
		cout<<ans3[i]<<","<<" ";
	}
	cout<<ans3[ans3.size()-1]<<"."<<endl;
	return 0;
}
