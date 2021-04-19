#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		//set<int> s;
		int a[n];
		for(int i= 1; i<=n; i++){
			a[i] = 0;
		}
		for(int i = 1; i<=n; i++){
			int pp;
			cin>>pp;
			a[pp]++;
		}
		int max = 0;
		for(int i = 1; i<=n; i++){
			if(a[i]>max){
				max = a[i];
			}
		}
		cout<<max<<endl;
		
	}
}
