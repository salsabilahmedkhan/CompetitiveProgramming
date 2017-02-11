#include <stdio.h>
#include <iostream>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <algorithm>
#include <stdlib.h>
#include <queue>
#include <stack>
#include <vector>
#include <string>
#include <map>

using namespace std;

#define ll long long
#define pi acos(-1.0)
#define eps 1e-9

int g[110][110], visit[110], a[110], n;

void bfs(int s)
{
    queue<int> q;
    visit[s]=1;
    a[s]=1;
    q.push(s);
    int u, v;
    while(!q.empty()) {
        u=q.front();
        q.pop();
        for(v=1; v<=n; v++) {
            if(g[u][v]==1 && visit[v]==0) {
                q.push(v);
                visit[v]=1;
                if(a[u]==1)
                    a[v]=2;
                else if(a[u]==2)
                    a[v]=1;
            }
        }
    }
}

int main()
{
    int i, c, j, f;
    scanf("%d", &n);
    memset(g, 0, sizeof(g));
    memset(visit, 0, sizeof(visit));
    memset(a, 0, sizeof(a));
    for(i=1; i<=n; i++) {
        while(1) {
            scanf("%d", &c);
            if(c==0)
                break;
            g[i][c]=1;
        }
    }
    for(i=1; i<=n; i++) {
        f=0;
        for(j=1; j<=n; j++) {
            if(g[i][j]==1)
                f=1;
        }
        if(f==0) {
            cout<<"0"<<endl;
            break;
        }
    }
    if(f==1){
    bfs(1);
    for(i=1; i<=n; i++) {
        if(visit[i]==0)
            bfs(i);
    }
    c=0;
    for(i=1; i<=n; i++) {
        if(a[i]==1)
            c++;
    }
    cout<<c<<endl;
    for(i=1; i<=n; i++) {
        if(a[i]==1) {
            cout<<i;
            break;
        }
    }
    for(i=i+1; i<=n; i++) {
        if(a[i]==1)
            cout<<" "<<i;
    }
    printf("\n");
    }
    return 0;
}
