#include<bits/stdc++.h>
using namespace std;

int verify(int mid, int power){
	
	int ans = 1;
	while(power>0){
		
		if(power%2 != 0){
			ans *= mid;
		}
		
		mid *= mid;
		power /= 2;
		
	}
	
	return ans;
}

int rootFind(int num, int root){
	
	int low = 1,high = num;
	
	while(low<=high){
		
		int mid = low + (high - low)/2;
		int res = verify(mid,root);
		
		if(res == num)
			return mid;
			
		else if(res < num)
			low = mid+1;
			
		else
			high = mid-1;
		
	} 
	
	return (-1);
	
}


int main(){
	int t;
	cout<<"Enter the number of test casses : ";
	cin>>t;
	
	while(t--){
		int num,root;
		
		cout<<"Enter Two Integers, Number and root : ";
		cin>>num>>root;
		int ans = rootFind(num,root);
		
		if(ans != -1){
			
			cout<<"Ans is : "<<ans<<"\n";
			
		}
		
		else{
			
			cout<<"Oops, does not exists in integer form\n";
		}
	}
	
	return 0;
}
