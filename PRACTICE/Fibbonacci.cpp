#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll sum = 0,prev = 1,curr = 0, back = 1;
	while(curr<=(4000000)){
		curr = prev+back;
		if(curr%2==0){
			sum+=curr;
			cout<<sum<<" ";
		}
		prev++;
		back++;
	}
	cout<<endl<<sum;
	return 0;  // 3999990000006 3999994000002 3999998000000 4000002000000 4000006000002 4000006000002
}
