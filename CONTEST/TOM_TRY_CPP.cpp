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
	long long int t,k,count,r,i;
	cin>>t;
	while(t--)
	{
		count = 0;
		k = 0;
		cin>>k;
		 for(i=0; i<INT_SIZE; i++)
    {
       
        if((num >> i ) & 1)
        {
            
            break;
        }

        
        count++;
    }

    	r = count + 1;
    	long long int res = power(2,r);
    	cout<<k<<endl;
    	long long int final = k/res;
   		cout<<final<<endl;
	}
	return 0;
}
