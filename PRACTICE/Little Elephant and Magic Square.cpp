#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[3][3];
	int dig[3];
	int sum = 0;
	for(int i = 0; i<3; i++){
		for(int j = 0; j<3; j++){
			cin>>a[i][j];
			sum+=a[i][j];
		}
		dig[i] = sum;
		sum = 0;
	}
	
	int dify = (dig[0]-dig[1]);
	int difz = (dig[0]-dig[2]);
	//bool negy = false,negz=false;
	for(int i = 0; i<10000; i++){
		int res = i+(i-dify)+(i-difz);
		cout<<res<<endl;
		if(dig[0]+i==res && dig[1]+(i-dify)==res && dig[2]+(i-difz)==res){
			a[0][0] = i;
			a[1][1] = i+dify;
			a[2][2] = i+difz;
			break;
		}
	}
	for(int i = 0; i<3; i++){
		for(int j = 0; j<3; j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
		
	}
}
