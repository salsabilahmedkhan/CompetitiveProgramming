#include <cstdio>
#include <cstring>
#include <iostream>
#include <map>
#include <vector>
#include <cmath>
#include <algorithm>
#include <cctype>
#include <queue>
#include <cstdlib>
using namespace std;

int main()
{
    int n,arr[105][105],arr2[105][105],arr3[105];
    while(cin>>n)
    {
        ///input
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            cin>>arr[i][j];
        }
        ///cumulative sum in arr2
        for(int i=0;i<n;i++)
        {
            int sum=0;
            for(int j=0;j<n;j++)
            {
                sum+=arr[j][i];
                arr2[j][i]=sum;
            }
        }
        ///i and j for controlling different row ranges
        int Max=0,prev=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                for(int k=0;k<n;k++)
                {
                    ///creating 1D arr3
                    if(i) arr3[k]=arr2[j][k]-arr2[i-1][k];
                    else arr3[k]=arr2[j][k];
                }
                prev=-1;
                for(int k=0;k<n;k++)
                {
                    ///1D Kadane
                    if(prev>0) arr3[k]+=prev;
                    prev=arr3[k];
                    if(arr3[k]>Max) Max=arr3[k];
                }
            }
        }
        cout<<Max<<endl;
    }
    return 0;
}
