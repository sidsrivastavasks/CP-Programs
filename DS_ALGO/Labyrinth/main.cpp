#include <bits/stdc++.h>
using namespace std;

int grid[1000][1000];
vector<long long> adj[1000000];

void makeGraph(string str[],int n, int m){

    int row[] = {-1,1,0,0};
    int col[] = {0,0,-1,1};
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(str[i][j]=='.'){

                int ptr = grid[i][j];
                for(int k = 0; k<4;  k++){
                    int rr = row[k];
                    int cc = col[k];
                    if(i+rr<0 || j+cc<0) continue;
                    if(i+rr>=n || j+cc>=m) continue;
                    if(str[i+rr][j+cc]=='.')
                        adj[ptr].push_back(grid[i+rr][j+cc]);

                }

            }
        }
    }
}

vector<int> reconstructPath(int s,int e, vector<int> prev){

    vector<int> ans,pt(1,-1);
    for(int i = e; i!=-1; i=prev[i]){
        ans.push_back(i);
    }

    reverse(ans.begin(),ans.end());

    if(ans[0]!=s){
        return pt;
    }

    return ans;
}


vector<int> solve(int n, int s){
    vector<int> prev(n,-1);
    vector<int> vis(n,false);
    queue<int> q;
    q.push(s);
    vis[s] = 1;

    while(!q.empty()){
        int node = q.front();
        q.pop();

        for(auto pp : adj[node]){
            if(!vis[pp]){
                q.push(pp);
                vis[pp] = 1;
                prev[pp] = node;
            }
        }

    }

    return prev;
}

vector<int> BFS(int n,int s, int e){
    vector<int> prev;
    prev = solve(n,s);

    return reconstructPath(s,e,prev);
}

int main()
{
    int n,m;
    cin>>n>>m;

    string str[n];
    for(int i = 0; i<n; i++){
        cin>>str[i];
    }

    int k = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            grid[i][j] = k;
            k++;
        }
    }

    int Start,End,rr,cc;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(str[i][j]=='A'){
                str[i][j] = '.';
                Start = grid[i][j];
                rr = i;
                cc = j;
            }

            if(str[i][j]=='B'){
                str[i][j] = '.';
                End = grid[i][j];
            }
        }
    }
    makeGraph(str,n,m);


    vector<int> path = BFS(n*m,Start,End);

    if(path[0]!=-1){
        cout<<"YES"<<endl<<path.size()-1<<endl;

        for(int i = 1; i<path.size(); i++){
            if(rr+1<n && grid[rr+1][cc]==path[i]){
                cout<<"D";
                rr++;
            }
            else if(cc+1<m && grid[rr][cc+1]==path[i]){
                cout<<"R";
                cc++;
            }
            else if(rr-1>=0 && grid[rr-1][cc]==path[i]){
                cout<<"U";
                rr--;
            }
            else if(cc-1>=0 && grid[rr][cc-1]==path[i]){
                cout<<"L";
                cc--;
            }
        }
    }
    else{
        cout<<"NO";
    }

    return 0;
}
