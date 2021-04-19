#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		map<char, int> mp;
		for(int i = 0; i<s.length(); i++){
			mp[s[i]]++;
		}
		int on = 0,eve=0,od=0,gtd=0,gte=0;
		//bool ok = false;
		vector<int> v;
		for(auto itr = mp.begin(); itr!=mp.end(); itr++){
			if(itr->second==1){
				on++;
			}
			else if(itr->second>1 && (itr->second)%2==0){
				
				if(itr->second>2){
					gte++;
					v.push_back(itr->second);
				}
				else{
					eve++;
				}
			}
			else{

				if(itr->second>3){
					gtd++;
					v.push_back(itr->second);
				}
				else{
					od++;
				}
					
			}
		}
		bool ok = false;
		if(on>0){
			sort(v.begin(),v.end(),greater<int>());
			if(on>eve){
				on-=eve;
				for(int i = 0; i<v.size(); i++){
					if(on>0 && v[i]!=0){
						if(v[i]%2==0){
							v[i]/=2;
							if(v[i]>=on){
								ok = true;
								break;
							}
							else{
								on-=v[i];
								v[i] = 0;
							}
						}
						else if(v[i]%2!=0 && v[i]>3){
							v[i]/=2;
							v[i]--;
							if(v[i]>=on){
								ok = true;
								break;
							}
							else{
								on-=v[i];
								v[i] = 3;
							}
						}
						
					}
					else{
						ok = true;
						break;
					}
				}
			}
			else{
				ok = true;
			}
		}
		else{
			ok = true;
		}
		if(ok){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
