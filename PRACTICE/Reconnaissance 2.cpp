#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i = 0 ; i<n; i++){
		cin>>a[i];
	}
	int pos1,pos2,curr=INT_MAX;
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			if(j!=i){
				int dif = abs(a[j]-a[i]);
				if(dif<curr){
					curr = dif;
					pos1 = i;
					pos2 = j;
					cout<<curr<<" ";
				}
			}
		}
	}
	cout<<pos1+1<<" "<<pos2+1;
}
