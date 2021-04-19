#include<iostream>
using namespace std;
long long int power(long long int x, long long int y) 
{ 
	if (y == 0) 
        return 1; 
    else if (y%2 == 0) 
        return power(x, y/2)*power(x, y/2); 
    else
        return x*power(x, y/2)*power(x, y/2); 
} 

int main()
{
	long long int t,k,count,r,i,final;
	cin>>t;
	while(t--)
	{
		count = 0;
		k = 0;
		cin>>k;
		long long int z = k;
		if(k%2!=0)
		{
			final = (k-1)/2;
		}
		else
		{
		while(k%2==0)
		{
			count++;
			k = k/2;
		}

    	r = count + 1;
    	long long int res = power(2,r);
    	final = z/res;
    	}
   		cout<<final<<endl;
	}
	return 0;
}
