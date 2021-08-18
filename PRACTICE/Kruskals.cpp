#include <stdio.h>
#define I 32767

int edges[3][6] = {{0, 0, 4, 2, 2, 3},
                   {3, 4, 2, 3, 1, 1},
                   {3, 12, 7, 3, 2, 5}};
int s[6] = {-1, -1, -1, -1, -1, -1};
int included[6] = {0};
int t[3][6];

void Union(int u, int v)
{
    if (s[u] < s[v])
    {
        s[u] += s[v];
        s[v] = u;
    }
    else
    {
        s[v] += s[u];
        s[u] = v;
    }
}

int Find(int u)
{
    int x = u;
    int v = 0;

    while (s[x] > 0)
    {
        x = s[x];
    }

    while (u != x)
    {
        v = s[u];
        s[u] = x;
        u = v;
    }
    return x;
}

int main()
{
    int i, j, k, u, v, min = I, n = 5, e = 6;
    i = 0;
    while (i < n - 1)
    {
        min = I;
        for (j = 0; j < e; j++)
        {
            if (included[j] == 0 && edges[2][j] < min)
            {
                min = edges[2][j];
                u = edges[0][j];
                v = edges[1][j];
                k = j;
            }
        }

       
        if (Find(u) != Find(v))
        {
            t[0][i] = u;
            t[1][i] = v;
            t[2][i] = min;
            Union(Find(u), Find(v));
            i++;
        }
        included[k] = 1;
    }
    int sum = 0;
    for (i = 0; i < n - 1; i++)
    {
        printf("Edge: (%d, %d) and Cost: %d\n", t[0][i], t[1][i], t[2][i]);
        sum += t[2][i];
    }
    printf("Total cost: %d\n", sum);
    return 0;
}
