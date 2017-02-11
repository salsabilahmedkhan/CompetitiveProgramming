#include <cstdio>
#include <iostream>
#include <queue>
#include <map>

using namespace std;

#define pb push_back
#define pf printf

map <int,int> m;
int chess[10][10],x1,x2,y1,y2,visit[10][10],cost[10][10],p1[50],p2[50],x[100],y[100];
int dx[]={-1,0,0,1,-1,1,1,-1};
int dy[]={0,1,-1,0,1,1,-1,-1};
vector <string> v;
void print()
{
    int i=0,a,b;
    a=x2;
    b=y2;
    //cout<<a<<" "<<b<<endl;
    while(1)
    {

        //cout<<a<<" "<<b<<endl;
        //cout<<p1[a]<<p2[b]<<endl;
        if(a==p1[a]+1 && b==p2[b]+1)
            v.pb("RD");
        else if(a==p1[a] && b==p2[b]+1)
            v.pb("R");
        else if(a==p1[a]-1 && b==p2[b]+1)
            v.pb("RU");
        else if(a==p1[a]-1 && b==p2[b])
            v.pb("U");
        else if(a==p1[a]-1 && b==p2[b]-1)
            v.pb("LU");
        else if(a==p1[a] && b==p2[b]-1)
            v.pb("L");
        else if(a==p1[a]+1 && b==p2[b]-1)
            v.pb("LD");
        else if(a==p1[a]+1 && b==p2[b])
            v.pb("D");

        a=p1[a];
        b=p2[b];

        if(a==x1 && b==y1)
        break;

    }

    for(int j=v.size()-1;j!=0;j--)
        cout<<v[j]<<endl;

    cout<<v[0]<<endl;
}

void bfs()
{
    queue<int> qx,qy;
    qx.push(x1);
    qy.push(y1);
    int u1,u2,v1,v2;
    visit[x1][y1]=1;
    cost[x1][y1]=0;
    while(!qx.empty())
    {
        u1=qx.front();
        u2=qy.front();
        qx.pop();
        qy.pop();
        for(int i=0;i<8;i++)
        {
            v1=u1+dx[i];
            v2=u2+dy[i];
            if(v1<1|| v1>8)
                continue;
            if(v2<1|| v2>8)
                continue;
            if(!visit[v1][v2])
            {
                cost[v1][v2]=cost[u1][u2]+1;
                visit[v1][v2]=1;
                p1[v1]=u1;
                p2[v2]=u2;
                qx.push(v1);
                qy.push(v2);
                if(v1==x2 && v2==y2)
                    break;
            }
        }
        if(v1==x2 && v2==y2)
                    break;
    }

    cout<<cost[x2][y2]<<endl;

    //    print();

}

int main()
{
    for(int i=1,j=8;i<=8;i++,j--)
        m[i]=j;
    char a[5];
    scanf("%s",a);
    y1=a[0]-'a'+1;
    x1=a[1]-'0';
    x1=m[x1];

    scanf("%s",a);

    y2=a[0]-'a'+1;
    x2=a[1]-'0';
    x2=m[x2];
    if(x1==x2 && y1==y2)
        bfs();
    else
    {
        bfs();
        print();
    }

    //cout<<x1<<y1<<x2<<y2<<endl;

    return 0;
}
