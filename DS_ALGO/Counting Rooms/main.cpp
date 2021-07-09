#include <bits/stdc++.h>
using namespace std;

bool visited[1000][1000];
char grid[1000][1000];

void bfs(int i,int j,int n, int m){

    queue<pair<int,int> > q;
    visited[i][j] = true;
    pair<int,int> pp;
    pp.first = i;
    pp.second = j;
    q.push(pp);
    while(!q.empty()){
        pair<int,int> node = q.front();
        q.pop();
        int ptr1 = node.first;
        int ptr2 = node.second;

        vector<pair<int,int>> directions{{1,0},{0,1},{-1,0},{0,-1}};
        for(int kk = 0; kk<4; kk++){
            int row = ptr1+directions[kk].first;
            int col = ptr2+directions[kk].second;

            if(row<0 || col<0)continue;
            if(row>=n || col>=m)continue;
            if(grid[row][col]=='.' && !visited[row][col])
                q.push({row,col}),
                visited[row][col] = true;

        }


        /**if(isValid(ptr1+1,ptr2,n,m)){
            pp.first = ptr1+1;
            pp.second = ptr2;
            q.push(pp);
            visited[ptr1+1][ptr2] = true;
            cout<<q.front().first;
        }
        if(isValid(ptr1,ptr2+1,n,m)){
            pp.first = ptr1;
            pp.second = ptr2+1;
            q.push(pp);
            visited[ptr1][ptr2+1] = true;
        }
        if(isValid(ptr1-1,ptr2,n,m)){
            pp.first = ptr1-1;
            pp.second = ptr2;
            q.push(pp);
            visited[ptr1-1][ptr2] = true;
        }
        if(isValid(ptr1,ptr2-1,n,m)){
            pp.first = ptr1;
            pp.second = ptr2-1;
            q.push(pp);
            visited[ptr1][ptr2-1] = true;
        }**/

    }

}
int main(){

    int n,m;
    cin>>n>>m;

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++)
            cin>>grid[i][j],visited[i][j] = false;
    }
    int cnt = 0;

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(grid[i][j]=='.' && !visited[i][j]){
                cnt++;
                bfs(i,j,n,m);
            }
        }

    }

    cout<<cnt;

    return 0;
}
