#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int t;
	cin>>t;
	int tt = 1;
	while(t--){
		ll cost = 0;
		int n;
		cin>>n;
		int a[n+1];
		for(int i = 0; i<n; i++){
			cin>>a[i];
		}
		int ptr2 = 1;
		for(int i = 0; i<n-1; i++)	
		{
			ptr2 = i;
			int mina = a[i];
			for(int j = i; j<n; j++){
				if(a[j]<mina){
					mina = a[j];
					ptr2 = j;
				}
			}	
			int run = (ptr2-i)+1;
			for(int k = 0; k<run/2; k++){
				swap(a[k+i],a[ptr2-k]);
			}
			
			/*for(int k = 0; k<n; k++){
				cout<<a[k]<<" ";
			}
			cout<<endl;*/
			cost+= (ptr2-i)+1;		
		}
		cout<<"Case #"<<tt<<": "<<cost<<endl;
		tt++;
	}
	return 0;
}
