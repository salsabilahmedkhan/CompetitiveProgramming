#include <stdio.h>
#include <iostream>

using namespace std;

int vertex,edge;
int g[100][100];
char color[100];
int prev[100];
int dis[100];
int finish[100];
int time,cycle;

void DFS_VISIT(int u)
{
    int i,v;
    color[u]='g';
    time = time+1;
    dis[u]=time;
    for(i=1;i<=vertex;i++)
    {
        if(g[u][i])
        {
            if(color[i]=='w')
            {
                prev[i]=u;
                DFS_VISIT(i);
            }
            else if(color[i]=='g')
            {
                cycle++;
            }
        }
    }
    color[u]='b';
    time= time +1;
    finish[u]=time;
}

void DFS()
{
    int i;
    for(i=1;i<=vertex;i++)
    {
        color[i]='w';
        prev[i]=0;

    }
    time =0;
    for(i=1;i<=vertex;i++)
    {
        if(color[i]=='w')
            DFS_VISIT(i);

    }
}

int main()
{
    int i,j,v1,v2;
    scanf("%d %d",&vertex,&edge);
    for(i=1;i<=edge;i++)
    {
        scanf("%d %d",&v1,&v2);
        g[v1][v2]=1;
    }
    DFS();
    for(i=1;i<=vertex;i++)
    {
        printf("color if %d is %c\n prev %d\n discovery time %d\n Finish time %d\n",i,color[i],prev[i],dis[i],finish[i]);
    }
    if(cycle>0)
        printf("%d CYCLE\n",cycle);
    else
        cout<<"NO"<<endl;
    return 0;
}
