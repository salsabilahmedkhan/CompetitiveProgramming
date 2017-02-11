#include <cstdio>
#include <iostream>
#include <cstring>
#include <cctype>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <list>
#include <utility>

using namespace std;

#define PI 3.141592653589793
#define pi acos(-1.0)
#define MAX 2000000000
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

typedef long long int lld;
typedef unsigned int ui;

int main()
{
    int n,i,a[50005],q,q1[25005],pc,j,high,low,mid;
    scanf("%d",&n);
    rep(i,n)
       scanf("%d",&a[i]);
    scanf("%d",&q);
    for(i=0;i<q;i++)
        scanf("%d",&q1[i]);
    for(i=0;i<q;i++)
    {
        low=0;
        high=n-1;
        mid=(high+low)/2;
        if(q1[i]>a[high])
            printf("%d X\n",a[high]);
        else if(q1[i]<a[low])
            printf("X %d\n",a[low]);
        else if(q1[i]==a[high])
            printf("%d X\n",a[high-1]);
        else if(q1[i]==a[low])
            printf("X %d\n",a[low+1]);

        else
        {
            while(low<=high)
            {
                if(a[mid]==q1[i])
                    break;
                else if(q1[i]>a[mid])
                    low=mid+1;
                else
                    high=mid-1;

                mid=(high+low)/2;
            }
            if(a[mid]==q1[i])
                printf("%d %d\n",a[mid-1],a[mid+1]);
            else if(a[mid]>q1[i])
                printf("%d %d\n",a[mid-1],a[mid]);
            else
                printf("%d %d\n",a[mid],a[mid+1]);
        }
    }

    return 0;
}



