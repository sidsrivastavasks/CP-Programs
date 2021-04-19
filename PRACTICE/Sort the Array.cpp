#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll n;
	cin>>n;
	vector<ll> v;
	for(int i = 0; i<n; i++){
		ll in;
		cin>>in;
		v.push_back(in);
	}
	
	ll ptr1 = 0,ptr2=0;
	bool ok = false;
	ll trav = 0;
	
	while(trav<n-1){
		if(!ok && v[trav]>v[trav+1]){
			ptr1 = trav;
			ptr2 = trav+1;
			ok = true;
		}	
		else if(ok && v[trav]>v[trav+1]){
			ptr2 = trav+1;
		}
		else if(ok && v[trav]<v[trav+1]){
			//ptr2 = trav+1;
			break;
		}
		trav++;
	}
	//cout<<ptr1<<" "<<ptr2<<endl;
	ll mid = (ptr1+ptr2)/2;
	ll j = ptr2;
	for(int i = ptr1; i<=mid; i++){
		swap(v[i],v[j]);
		j--;
	}
	
	bool flag = true;
	for(int i = 0; i<n-1; i++){
		if(v[i]>v[i+1]){
			flag = false;
			break;
		}
	}
	
	if(flag){
		cout<<"yes"<<"\n";
		cout<<ptr1+1<<" "<<ptr2+1;
	}
	else{
		cout<<"no";
	}
	return 0;
}
