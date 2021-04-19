#include<bits/stdc++.h>
using namespace std;
#define ll long long
int fnd(int a, int b){
	//int ch = max(a,b)/min(a,b);
	int res = 0;
	for(int i = a; i<=b; i++){
		if(max(a,i)/min(a,i)<=2){
			res = i;
			break;
		}
	}
	return res;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i<n; i++){
			cin>>a[i];
		}
		bool ok = false;
		int pres = 0,count = 0,ch = 0;
		for(int i = 0; i<n-1; i++){
			ch = max(a[i],a[i+1])/min(a[i],a[i+1]);
			if(ch>2){
				int snd = a[i+1];
				pres = a[i];
				while(ch>2){
					snd = pres;
					pres = fnd(pres,snd);
					count++;
					ch = max(snd,pres)/min(snd,pres);
				}	
			}
		
		}
		cout<<count<<endl;
	}
}
