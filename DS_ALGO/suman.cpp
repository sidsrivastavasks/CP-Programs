#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	int op = min(n,m);
	int cnt = 0;
	while(op>=1){
		cnt += (m*n)/(op*op);
		int pp = (m*n)/(op*op);
		//cout<<pp<<" ";
		if(m>n){
			m = ((n*m)-((op*op)*pp))/op;
		}
		else{
			n = ((n*m)-((op*op)*pp))/op;
		}
		//cout<<m<<" "<<n<<" ";
		op = min(n,m);		
		//cout<<pp<<" "<<m<<" "<<n<<" "<<op<<" "<<endl;
	}
	
	cout<<cnt;
}
