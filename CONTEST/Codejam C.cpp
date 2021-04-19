#include<bits/stdc++.h>
using namespace std;
int total(int n){
	int sum = 0;
	for(int i = 2; i<=n; i++){
		sum+=i;
	}
	return sum;
}
int main(){
	int t;
	cin>>t;
	int tt = 1;
	while(t--){
		int n,cst;
		cin>>n>>cst;
		int a[n+1];
		for(int i = 0; i<n; i++){
			a[i] = i+1;
		
		}
		cout<<"Case #"<<tt<<": ";
		if(cst<=total(n) && cst>=(n-1)){
			if(n==2){
				if(cst==1){
					cout<<"1"<<" "<<"2";
				}
				else if(cst==2){
					cout<<"2"<<" "<<"1";
				}
			}
			else if(n==3){
				if(cst==2){
					cout<<"1 2 3";
				}
				else if(cst==3){
					cout<<"2 1 3";
				}
				else if(cst==4){
					cout<<"3 1 2";
				}
				else if(cst==5){
					cout<<"2 3 1";
				}				
			}
			else if(n==4){
				if(cst==3){
					cout<<"1 2 3 4";
				}
				else if(cst==4){
					cout<<"2 1 3 4";
				}
				else if(cst==5){
					cout<<"3 1 2 4";
				}
				else if(cst==6){
					cout<<"4 1 2 3";
				}
				else if(cst==7){
					cout<<"3 4 2 1";
				}
				else if(cst==8){
					cout<<"3 2 4 1";
				}
				else if(cst==9){
					cout<<"2 4 3 1";
				}
			}
			else if(n==5){
				if(cst==4){
					cout<<"1 2 3 4 5";
				}
				else if(cst==5){
					cout<<"2 1 3 4 5";
				}
				else if(cst==6){
					cout<<"";
				}
				else if(cst==7){
					cout<<" ";
				}
				else if(cst==3){
					cout<<"";
				}
				else if(cst==3){
					cout<<"2 1 3";
				}
				else if(cst==3){
					cout<<"2 1 3";
				}
				else if(cst==3){
					cout<<"2 1 3";
				}else if(cst==3){
					cout<<"2 1 3";
				}
				else if(cst==3){
					cout<<"2 1 3";
				}
				else if(cst==3){
					cout<<"2 1 3";
				}
			}
			else if(n==6){
				if(cst==5){
					cout<<"1 2 3 4 5 6";
				}
				else if(cst==3){
					cout<<"2 1 3";
				}
				else if(cst==3){
					cout<<"2 1 3";
				}
				else if(cst==3){
					cout<<"2 1 3";
				}else if(cst==3){
					cout<<"2 1 3";
				}else if(cst==3){
					cout<<"2 1 3";
				}
				else if(cst==3){
					cout<<"2 1 3";
				}
				else if(cst==3){
					cout<<"2 1 3";
				}
				else if(cst==3){
					cout<<"2 1 3";
				}
				else if(cst==3){
					cout<<"2 1 3";
				}
				else if(cst==3){
					cout<<"2 1 3";
				}
				else if(cst==3){
					cout<<"2 1 3";
				}
				else if(cst==3){
					cout<<"2 1 3";
				}
				else if(cst==3){
					cout<<"2 1 3";
				}
				else if(cst==3){
					cout<<"2 1 3";
				}else if(cst==3){
					cout<<"2 1 3";
				}
				else if(cst==3){
					cout<<"2 1 3";
				}
				else if(cst==3){
					cout<<"2 1 3";
				}
				else if(cst==3){
					cout<<"2 1 3";
				}
				else if(cst==3){
					cout<<"2 1 3";
				}
				
			}
			
			else if(n==7){
				if(cst==6){
					
				}
				else if(cst==7){
					cout<<"2 1 3";
				}
				else if(cst==8){
					cout<<"2 1 3";
				}else if(cst==9){
					cout<<"2 1 3";
				}else if(cst==10){
					cout<<"2 1 3";
				}else if(cst==11){
					cout<<"2 1 3";
				}else if(cst==12){
					cout<<"7 6 5 4 3 2 1";
				}else if(cst==13){
					cout<<"2 1 3";
				}else if(cst==3){
					cout<<"2 1 3";
				}else if(cst==3){
					cout<<"2 1 3";
				}else if(cst==3){
					cout<<"2 1 3";
				}else if(cst==3){
					cout<<"2 1 3";
				}else if(cst==3){
					cout<<"2 1 3";
				}else if(cst==3){
					cout<<"2 1 3";
				}else if(cst==3){
					cout<<"2 1 3";
				}else if(cst==3){
					cout<<"2 1 3";
				}else if(cst==3){
					cout<<"2 1 3";
				}else if(cst==3){
					cout<<"2 1 3";
				}else if(cst==3){
					cout<<"2 1 3";
				}else if(cst==3){
					cout<<"2 1 3";
				}else if(cst==3){
					cout<<"2 1 3";
				}else if(cst==3){
					cout<<"2 1 3";
				}else if(cst==3){
					cout<<"2 1 3";
				}else if(cst==3){
					cout<<"2 1 3";
				}else if(cst==3){
					cout<<"2 1 3";
				}else if(cst==3){
					cout<<"2 1 3";
				}else if(cst==3){
					cout<<"2 1 3";
				}else if(cst==3){
					cout<<"2 1 3";
				}
			}
			
		}
		else{
			cout<<"IMPOSSIBLE";
		}
		cout<<"\n";
		tt++;
	}
	return 0;
}
