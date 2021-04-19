#include<bits/stdc++.h>
using namespace std;
vector<int> solve(vector<int> &A, vector<vector<int> > &B) {
    vector<int> fin;
    for(int i = 0; i<B.size(); i++){
        long long odd = 0,eve=0;
        vector<long long> ans;
        for(int j = B[i][0]; j<=B[i][1]; j++){
            ans.push_back(A[j]);
            if(A[j]%2!=0){
                odd++;
            }
            else{
                eve++;
            }
        }
        if(odd>=2){
            fin.push_back(0);
        }
        else{
            sort(ans.begin(),ans.end());
            bool ok = false;
            for(int k = 0; k<ans.size()-1; k++){
                if(ans[k]&ans[k+1]>0){
                    fin.push_back(0);
                    ok = true;
                    break;
                }
            }
            if(!ok && eve>=1 && odd>=1){
                fin.push_back(1);
            }
            else if(!ok && eve>=2 && odd==0){
                fin.push_back(2);
            }
        }
    }
    return fin;
}

int main()
{
	vector<long long> A(3);
	A = {1,2,3};
	vector<vector<int> > B(3)(2)= {{1,2},{0,1},{0,2}};
	cout<<solve(A,B)
//	B = {{1,2},{0,1},{0,2}};
	
}

