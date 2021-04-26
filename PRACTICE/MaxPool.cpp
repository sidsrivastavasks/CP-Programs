#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
	freopen("lol.txt", "w", stdout);
	int n,m;
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            scanf("%d",&a[i][j]);
        }
    }
    int ans [n/2][m/2];
    int ptr1 = 0,ptr2 = 0;
    for(int i = 0; i<n-1; i+=2){
        for(int j = 0; j<m-1; j+=2){
            int frst,snd,thrd,frth;
            frst = a[i][j];
            snd = a[i][j+1];
            thrd = a[i+1][j];
            frth = a[i+1][j+1];
            int cmpr1 = frst>snd? frst : snd;
            int cmpr2 = thrd>frth? thrd : frth;
            ans[ptr1][ptr2] = cmpr1>cmpr2? cmpr1: cmpr2;
            ptr2++;
        }
        ptr1++;
        ptr2 = 0;
    }

    for(int i = 0; i<n/2; i++){
        for(int j = 0; j<m/2; j++){
            printf("%d ",ans[i][j]);
        }
        printf("\n");
    }
    return 0;
}

