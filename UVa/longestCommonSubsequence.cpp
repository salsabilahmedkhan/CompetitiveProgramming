
#include <cstdio>
#include <iostream>
#include <cstring>
#include <cctype>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <queue>
#include <map>
#include <utility>

using namespace std;

#define PI 3.141592653589793
#define MAX 2000000000

typedef long long int lld;

char a[1005],b[1005];
int g[1005][1005],l1,l2;

void lcs(char* a,char* b)
{
    int i,j;

    l1=strlen(a);
    l2=strlen(b);

    for(i=0;i<=l1;i++)
        g[0][i]=0;

    for(i=0;i<=l2;i++)
        g[i][0]=0;
    for(i=1;i<=l1;i++)
    {
        for(j=1;j<=l2;j++)
        {
            if(a[i-1]==b[j-1])
                g[i][j]=g[i-1][j-1]+1;
            else
            {
                if(g[i-1][j]>=g[i][j-1])
                    g[i][j]=g[i-1][j];
                else
                    g[i][j]=g[i][j-1];
            }
        }
    }
}

int main()
{


    while(gets(a))
    {
        gets(b);

        lcs(a,b);
        printf("%d\n",g[l1][l2]);

    }
    return 0;
}


