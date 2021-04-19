#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
void print(vector<ll> v){
	for(int i = 0; i<v.size(); i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,e,h,a,b,c;
		cin>>n>>e>>h>>a>>b>>c;
		bool ok = false;
		vector<ll> cost;
		if(e/2>=n){
			if(e/2>n){
				cost.pb(n*a);
			}
			else{
				cost.pb((e/2)*a);
			}
			//print(cost);
			ok = true;
		}
		if(h/3>=n){
			if(h/3>n){
				cost.pb(n*b);
			}
			else{
				cost.pb((h/3)*b);
			}
			//print(cost);
			ok = true;
		}
		if(min(e,h)>=n){
			if(min(e,h)>n){
				cost.pb(n*c);
			}
			else{
				cost.pb(min(e,h)*c);
			}
			//print(cost);
			ok = true;
		}
		if((e/2+h/3)>=n){
			if((e/2+h/3)>n){
				cost.pb((e/2)*a + (n- e/2)*b);
				cost.pb((h/3)*b + (n-h/3)*a);
			}
			else{
				cost.pb((e/2)*a+(h/3)*b);
				//cost.pb(())
			}
		//	print(cost);
			ok = true;
		}
		if(e/2+min((e%2),h)>=n){
			if(e/2+min((e%2),h)>n){
				cost.pb((e/2)*a + (n-e/2)*c);
			}
			else{
				cost.pb((e/2)*a+(min((e%2),h))*c);
			}
			//print(cost);
			ok = true;
		}
		if(h/3+min((h%3),e)>=n){
			if(h/3+min((h%3),e)>n){
				cost.pb((h/3)*b + (n-h/3)*c);
			}
			else{
				cost.pb((h/3)*b+(min((h%3),e))*c);
			}
		//	print(cost);
			ok = true;
		}
		if(min(e,h) + (e-min(e,h))/2 >=n){
			if(min(e,h) + (e-min(e,h))/2 > n){
				if(min(e,h)>n)
					cost.pb(((min(e,h)))*c);
				else
					cost.pb(((min(e,h)))*c + (n-min(e,h))*a);
			}
			else{
				cost.pb((min(e,h))*c + ((e-min(e,h))/2)*a);
			}
		//	print(cost);
			ok = true;
		}
		if(min(e,h) + (h-min(e,h))/3 >=n){
			if(min(e,h) + (h-min(e,h))/3 >n){
				if(min(e,h)>n)
					cost.pb((min(e,h))*c);
				else
					cost.pb((min(e,h))*c+(n-min(e,h))*b);
			}
			else{
				cost.pb((min(e,h))*c + ((h-min(e,h))/3)*b);
			}
		//	print(cost);
			ok = true;
		}
		if(e/2+h/3+min((e%2),(h%3))>=n){
			if(e/2+h/3+min((e%2),(h%3))>n){
				if(min((e%2),(h%3))>n)
					cost.pb((e/2)*a + (h/3)*b);
				else
					cost.pb((e/2)*a + (h/3)*b + (n-(e/2+h/3))*c);
			}
			else{
				cost.pb((e/2)*a+(h/3)*b+(min((e%2),(h%3)))*c);
			}
			//print(cost);
			ok = true;
		}
		if(e/2 + min((e%2),h) + (h-min((e%2),h))/3>=n){
			if(e/2 + min((e%2),h) + (h-min((e%2),h))/3>n){
				if((h-min((e%2),h))/3>n)
					cost.pb((e/2)*a+ (min((e%2),h))*c);
				else
					cost.pb((e/2)*a+ (min((e%2),h))*c + (n-((e/2)+(min((e%2),h))))*b);
			}
			else{
				cost.pb((e/2)*a + (min((e%2),h))*c + ((h-min((e%2),h))/3)*b);
			}
			//print(cost);
			ok = true;
		}
		if(h/3 + min((h%3),e)+ (e-min((h%3),e))/2>=n){
			if(h/3 + min((h%3),e)+ (e-min((h%3),e))/2> n){
				if((e-min((h%3),e))/2>n)
					cost.pb((h/3)*b + (min((h%3),e))*c);
				else
					cost.pb((h/3)*b + (min((h%3),e))*c + (n-((h/3)+(min((h%3),e))))*a);
			}
			else{
				cost.pb((h/3)*b + (min((h%3),e))*c+ ((e-min((h%3),e))/2)*a);
			}
			//print(cost);
			ok = true;
		}
		if(min(e,h)+(e-(min(e,h)))/2+(h-(min(e,h)))/3>=n){
			if(min(e,h)+(e-(min(e,h)))/2+(h-(min(e,h)))/3 > n){
				if((h-(min(e,h)))/3>n)
					cost.pb((min(e,h))*c+((e-(min(e,h)))/2)*a);
					
			/*	else
					cost.pb((min(e,h))*c+((e-(min(e,h)))/2)*a +(n-(min(e,h)+(e-(min(e,h)))/2))*b);
				if((e-(min(e,h)))/2>n)
					cost.pb((min(e,h))*c+((h-(min(e,h)))/3)*b);
				else	
					cost.pb((min(e,h))*c+((h-(min(e,h)))/3)*b +(n-(min(e,h)+(h-(min(e,h)))/3))*a);*/
			}
			else{
				cost.pb((min(e,h))*c+((e-(min(e,h)))/2)*a+((h-(min(e,h)))/3)*b);
			}
			//print(cost);
			ok = true;
		}
		if(ok){
			sort(cost.begin(),cost.end());
			cout<<cost[0]<<endl;
		}
		else{
			cout<<"-1"<<endl;
		}
	}	
	return 0;
}
