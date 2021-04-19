#include<bits/stdc++.h>
using namespace std;
vector<long long> ans;
void PrimeNumbers()
{
	//time complexity using sieve of Eratoshthenes O(loglogn)
	int n = 100009;
	int prime[n+1];
	for(int i = 0; i<=n; i++)
	{
		prime[i]=1;
	}	
	prime[0]=0;
	prime[1]=0;
	//As the pair repeat after the square root 
	//of any number so we will just check till square root
	//and update all the multiples of the no. to 0 
	for(int i = 0; i<=sqrt(n); i++)
	{
		if(prime[i]==1)
		{
			for(int j = 2; i*j<=n; j++)
			{
				prime[i*j]=0;
			}
		}
	}
	//print all index which contains 1
	for(int i = 0; i<=n; i++)
	{
		if(prime[i]==1)
		{
			ans.push_back(i);
		}
	}

}
int main(){
	PrimeNumbers();
	vector<long long>::iterator lower1,upper1;
	long long n,dif=0;
	cin>>n;
	for(int i = 0; i<n; i++){
		long long pp;
		cin>>pp;
		upper1 = upper_bound(ans.begin(),ans.end(),pp);
		lower1 = lower_bound(ans.begin(),ans.end(),pp);
		dif+= (abs(ans[upper1-ans.begin()]-pp) < abs(pp-ans[lower1-ans.begin()]))? abs(ans[upper1-ans.begin()]-pp):abs(pp-ans[lower1-ans.begin()]);
	}
	cout<<dif;
}
