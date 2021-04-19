#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i = 1; i<=n; i++){
		a[i] = i;
	}
	if(n%2!=0){
		cout<<"-1";
		return 0;
	}
	for(int i = 1; i<n; i++){
		swap(a[i],a[i+1]);
		i++;
	}
	for(int i = 1; i<=n; i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
