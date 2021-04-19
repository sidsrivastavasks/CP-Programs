#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int count = 0;
	if(n<m){
		cout<<"-1";
	}
	else{
		count = n/2 + n%2;
		if(count%m==0){
			cout<<count;
		}
		else{
			int ch = (count/m) + 1;
			cout<<count+abs(m*ch-count);
		}
	}
	return 0;
}

