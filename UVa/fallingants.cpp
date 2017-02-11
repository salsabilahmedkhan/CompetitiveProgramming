#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

#define pb push_back
#define rep(i,n) for(int i=0;i<(n);i++)
#define repp(i,a,n) for(int i=(a);i<(n);i++)
#define dec(i,n) for(int i=(n);i>0;i--)
#define decc(i,a,n) for(int i=(a);i>(n);i--)
#define Max(a,b) ((a)>(b)?(a):(b))
#define Min(a,b) ((a)<(b)?(a):(b))
#define abs(a) ((a)<0?-(a):(a))
#define sqr(a) ((a)*(a))
#define mem(a,b) memset((a),(b),sizeof(a))

const double pi=acos(-1.0);
const int inf=2000000000;
typedef long long ll;
typedef unsigned int ui;

#define eps 1e-9
#define MAX 2000000000

int arr[105][5];

int main()
{
    int n;
    while(cin>>n && n)
    {
        int maxH=-1,Volume=-1;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
            if(arr[i][2]>maxH) maxH=arr[i][2];
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i][2]==maxH)
            {
                int temp=arr[i][0]*arr[i][1]*arr[i][2];
                if(temp>Volume) Volume=temp;
            }
        }
        cout<<Volume<<endl;
    }
    return 0;
}
