#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll closepoweroftwo(ll num)
{
	ll power = 1;
	while(power*2 <= num)
    	power*=2;
    return power;
}
ll pos(ll a[],ll n,ll x,ll i)
{
		for(int k = i+1; k<n-1; k++)
		{
			if(a[k]^x<a[k])
			{
				return k;
			}
		}
		return n-1;
}
int main()
{
	ll testcase;
	cin>>testcase;
	
	while(testcase--)
	{
		
		ll lenofarr,operations;
		
		cin>>lenofarr>>operations;
		
		ll temp = 0;
		
		ll arr[lenofarr];
		
		for(int k = 0; k<lenofarr; k++)
		{
			cin>>arr[k];
		}
		ll position1 = 0, position2 = 1;
		
		while(position2 != lenofarr && operations--)
		{
			if(arr[position1] == 0)
			{
				if(position1+1 != position2)
				{
					position1++;					//when the array is like 1 0 0 4 5 then initially pos1 will be at 1 and pos2 will be on 4
				}
				else 
				{
					position1++;
					position2++;					//it is for the array 1 2 3 4, when pos1 is at 1 and pos2 is at 2
				}
				operations++;
				continue;
			}
			else 
			{
				ll valofnearest = closepoweroftwo(arr[position1]);
				
				position2 = pos(arr,lenofarr,valofnearest,position1);
				
				arr[position1] = arr[position1]^valofnearest;
				
				arr[position2] = arr[position2]^valofnearest;
				
				/**for(int k = 0; k<lenofarr; k++)	
				{	
					cout<<arr[k]<<" ";
				}
				cout<<endl;**/
			}
		}
		ll ptr1 = lenofarr-2, ptr2 = lenofarr-1;
		
		/**for(int k = 0; k<lenofarr-1; k++)
		{
			if(arr[k] != 0)
			{
				ptr1 = k;
				break;
			}
		}
		
		while(arr[ptr1] != 0 && operations--)
		{
			ll valofnearest = closepoweroftwo(arr[ptr1]);			//it will return nearest value of power of two
			
			arr[ptr1] = arr[ptr1]^valofnearest;						//this while loop i kept for the situation when j equals to n but pos1 is not at lenofarr-2th position				
			
			arr[ptr2] = arr[ptr2]^valofnearest;						//for example 0 1 0 0 3
			
		}
		ptr1 = lenofarr-2;
		ptr2 = lenofarr-1;
			
			//temp = temp-operations;
			//temp = operations-temp;**/
		/**if(operations>0 && operations%2!=0)
			{
				ll valofnearest = closepoweroftwo(arr[ptr1]);			//it will return nearest value of power of two
				
				arr[ptr1] = arr[ptr1]^valofnearest;								
				
				arr[ptr2] = arr[ptr2]^valofnearest;		
			}**/

		for(int k = 0; k<lenofarr; k++)	
		{	
			cout<<arr[k]<<" ";
		}
		cout<<endl;
	}
return 0;	
}
