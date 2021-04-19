#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	cout<<n<<endl;
	for(int i = 1; i<=(m*n)-1; i++){
		cout<<i<<" "<<(i+1)%m + 1<<endl;
	}
	return 0;
}
