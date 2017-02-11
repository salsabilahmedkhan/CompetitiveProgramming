#include <cstdio>
#include <iostream>
#include <cstring>
#include <cctype>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <queue>

using namespace std;

#define PI 3.141592653589793
#define MAX 2000000000

typedef long long int lld;

int a[105][105],b[105][105],c[105],n;

void cum()
{
    for(int i=0;i<n;i++)
        b[0][i]=a[0][i];

    for(int i=0;i<n;i++)
        for(int j=1;j<n;j++)
            b[j][i]=b[j-1][i]+a[j][i];

}


int main()
{
    int prev,max;

    while(scanf("%d",&n)!=EOF)
    {
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                scanf("%d",&a[i][j]);

        cum();

        prev=0,max=0;

        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                for(int k=0;k<n;k++)
                {
                    if(!i) c[k]=b[j][k];
                    else c[k]=b[j][k]-b[i-1][k];
                }

                prev=0;

                for(int k=0;k<n;k++)
                {
                    if(prev>0)
                        c[k]+=prev;

                    prev=c[k];

                    if(c[k]>max)
                        max=c[k];
                }

            }
        }


        printf("%d\n",max);


    }


    return 0;
}



