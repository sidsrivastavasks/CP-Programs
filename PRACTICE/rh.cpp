#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;

    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,count1=0;
        cin >> n;
        for(ll i=3;i<=n;i++)
        {
            if(isPrime(i)==true&&isPrime(i+2)==true)
            {
            count1++;i++;
            }

        }
        if(n<7)count1-=1;
        cout<<count1<<"\n";
    }
    return 0;
}
