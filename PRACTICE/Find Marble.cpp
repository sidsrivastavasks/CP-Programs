#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,s,t;
	cin>>n>>s>>t;
	int p[n],a[n],b[n],c[n];
	for(int i = 0; i<n; i++){
		cin>>p[i];
		a[i] = i+1;
		b[i] = i+1;
		c[i] = 0;
	}
	bool ok = true;
	int ptr = 0,count = 0,pos = a[s-1],cnt = 0,pp=s;
	if(a[s-1]!=a[t-1]){
		while(1){
		if(c[t-1]==pos)
		{
			break;
		}
		else if(c[s-1] == pos){
			ok = false;
			break;
		}
		c[p[pp]-1] = pos;
		pp = p[pp];
		count++;
		cnt++;
	}
	}
	if(ok){
		cout<<count<<endl;
	}
	else{
		cout<<"-1";
	}
	return 0;
}
