#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

int cut[100],visited[100][100],dp[100][100],sum[100],pos[100],arr[100],visit[100];
vector <int> path;

int mcm(int beg,int end)
{

    if(visited[beg][end])
        return dp[beg][end];
    int len=0,min=1<<30,cost,flag=0,min_ind;
    for(int i=beg;i<end;i++)
    {
        if(pos[i])
        {
            int left=mcm(beg,i);
            int right=mcm(i+1,end);
            cost=left+right+(end-beg+1);
            //cout<<"left: "<<left<<" right: "<<right<<endl;
            //cout<<"beg: "<<beg<<" end: "<<end<<endl;
            //cout<<i<<endl;
            if(cost<min)
            {
                min_ind=i;
                min=cost;
            }

            flag=1;
        }

    }
    if(!flag)
        min=0;
    if(flag)
    path.push_back(min_ind);
    dp[beg][end]=min;
    visited[beg][end]=1;
    return dp[beg][end];
}

int main()
{
    int l,k;
    cin>>l>>k;

    memset(dp,0,sizeof(dp));
    memset(visited,0,sizeof(visited));
    memset(sum,0,sizeof(sum));
    memset(pos,0,sizeof(pos));

    for(int i=0;i<k;i++)
        cin>>cut[i];
    sum[0]=cut[0];
    for(int i=1;i<k;i++)
        sum[i]=sum[i-1]+cut[i];

    for(int i=0;i<k;i++)
        pos[sum[i]]=1;
    int ans=mcm(1,l);

    cout<<ans<<endl;
    int j=0;
    for(int i=0;i<path.size()-1;i++)
    {
        if(arr[j-1]==path[i])
            continue;
        else
            arr[j++]=path[i];
    }
    for(int i=j-1;i>=0;i--)
        {
            if(visit[arr[i]])
            continue;
            cout<<arr[i]<<endl;
            visit[arr[i]]=1;
                    }

    return 0;
}


