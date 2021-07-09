#include <bits/stdc++.h>
using namespace std;

int rnk[10000];
int parent[10000];

void makeSet(){
    for(int i = 1; i<=1e4; i++){
        parent[i] = i;
        rnk[i] = 0;
    }
}

int findPar(int node){
    if(node==parent[node]){
       return node;
    }

    return parent[node] = findPar(parent[node]);
}

void unionn(int u,int v){
    u = findPar(u);
    v = findPar(v);

    if(rnk[u]<rnk[v]){
        parent[u] = v;
    }
    else if(rnk[v]<rnk[u]){
        parent[v] = u;
    }
    else{
        parent[v] = u;
        rnk[u]++;
    }
}

int main()
{
	makeSet();
	int m;
	cin>>m;
	while(m--){
        int u,v;
        cin>>u>>v;

        if(findPar(u)!=findPar(v)){
            cout<<"Different Component"<<endl;
            unionn(u,v);
        }
        else{
            cout<<"Same Parent";
        }
	}
    return 0;
}
