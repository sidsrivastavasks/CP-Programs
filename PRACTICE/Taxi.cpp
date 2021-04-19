#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int on = 0, tw = 0, th = 0, ans = 0;
	for(int i = 0; i<n; i++){
		int x;
		cin>>x;
		if(x==1)on++;
		else if(x==2)tw++;
		else if(x==3)th++;
		else ans++;
	}
	ans+=th;
	if(on>=th){
		on-=th;
	}
	else{
		on = 0;
	}
	ans+=tw/2;
	tw = tw%2;
	if(tw){
		if(on>=2){
			ans++;
			on-=2;
			ans+=on/4;
			if(on%4){
				ans++;
			}
		}
		else{
			ans++;
		}
	}
	else{
		ans+=on/4;
		if(on%4){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
