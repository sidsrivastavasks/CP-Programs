#include <bits/stdc++.h>
using namespace std;
//==========================================================//
#define ll long long
#define pb push_back
#define mp make_pair
#define endl "\n"
#define ld long double
#define allb(x) sort((x).begin(), (x).end())
#define allg(x) sort((x).begin(), (x).end(), greater<int>())
const ll M = 1e9+7;
typedef pair<int,int>	pii;
typedef pair<ll,ll>		pll;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pll>		vpll;
//==========================================================//
string s = {"abcdefghijklmnopqrstuvwxyz"};
ll GCD(ll a, ll b)
{
	if(a==0){return b;}
	if(b==0){return a;}
	return GCD(b,a%b);
}
ll GCD_EUCLID(ll a, ll b)
{
	ll dividend = a>=b ? a:b;
	ll divisor = a<=b ? a:b;
	while(divisor!=0)
	{
		ll remainder = dividend%divisor;
		dividend = divisor;
		divisor = remainder;
	}
	return dividend;
}
ll ModExponent(ll p, ll q)
{
	ll int y=0;
	if(q==0){return 1;}
	if(q%2==0)
	{
		y = ModExponent(p,q/2);
		return (y*y)%M;
	}
	else
	{
		y = ModExponent(p,q-1);
		return ((p%M)*(y))%M;
	}

}
bool is_prime(int a)
{

}
ll (ll x)
{
	ll power = 1;
	int count = 0;
	while(power*2<= x){
    	power*=2;
    	count++;
    	}minpow2
    return count;
}
void PrimeNumbers()
{
	//time complexity using sieve of Eratoshthenes O(loglogn)

	int n;
	cin>>n;
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
			cout<<i<<" ";
		}
	}
	cout<<"\n";

}
void FindAllElements(int n, int k)
{
    // Initialising the sum with k
    int sum = k;

    // Initialising an array A with k elements
    // and filling all elements with 1
    int A[k];
    fill(A, A + k, 1);

    for (int i = k - 1; i >= 0; --i) {

        // Iterating A[] from k-1 to 0
        while (sum + A[i] <= n) {

            // Update sum and A[i]
            // till sum + A[i] is less than equal to n
            sum += A[i];
            A[i] *= 2;
        }
    }

    // Impossible to find the combination
    if (sum != n) {
        cout << "-1";
    }

    // Possible solution is stored in A[]
    else {
        for (int i = 0; i < k; ++i)
            {
                int index = minpow2(A[i]);
            cout<<s[index];
            }
            cout<<endl;
    }
}
void solve()
{
	ll n,k;
	cin>>n>>k;
	if(k<n)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        FindAllElements(n, k);
    }
}
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		solve();
	}
    return 0;
}
