#include<bits/stdC++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int a[n],b[m];
	for(int i = 0; i<n; i++){
		cin>>a[i];
	}
	for(int i = 0; i<m; i++){
		cin>>b[i];
	}
	int c[n+m];
	int ptr1 = 0,ptr2=0;
	int k = 0;
	while(ptr1<n && ptr2<m){
		if(a[ptr1]<b[ptr2]){
			c[k] = a[ptr1];					//6 7     1 6 9 13 18 18   2 3 8 13 15 21 25

			k++;
			ptr1++;
		}
		else if(b[ptr2]<a[ptr1]){
			c[k] = b[ptr2];
			ptr2++;
			k++;
		}
		else{
			c[k] = a[ptr1];
			k++;
			c[k] = b[ptr2];
			ptr1++;
			ptr2++;
			k++;
		}
	}
	//cout<<ptr2<<" "<<ptr1<<endl;
	if(ptr2<m || ptr1<n){
		//cout<<a[ptr1]<<" "<<endl;
		if(ptr1<=n-1){
			for(int i = ptr1; i<n; i++){
				c[k] = a[i];
				k++;
			}
		}
		else{
			for(int i = ptr2; i<m; i++){
				c[k] = b[i];
				k++;
			}
		}
	}
	for(int i = 0; i<(n+m); i++){
		cout<<c[i]<<" ";
	}
	return 0;
}
