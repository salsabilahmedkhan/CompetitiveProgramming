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

char a[500][500],b[500][500],c[500][500];
int i,j,g[500][500],f[500][500],t;

void mapping()
{
    int l=i,m=j;
    t=0;
    while(1)
    {
        if(f[l][m]==2)
        {
           strcpy(c[t++],a[l-1]);
           l--;m--;
        }

        else if(f[l][m]==3)
            l--;

        else if(f[l][m]==1)
            m--;

        if(l==0 || m==0)
            break;

    }
}

void lcs()
{
    int l,m;
    for(l=0;l<=i;l++)
    {
        g[l][0]=0;
        f[l][0]=0;
    }

    for(l=0;l<=j;l++)
    {
        g[0][l]=0;
        f[0][l]=0;
    }
    for(l=1;l<=i;l++)
    {
        for(m=1;m<=j;m++)
        {
            if(strcmp(a[l-1],b[m-1])==0)
            {
                g[l][m]=g[l-1][m-1]+1;
                f[l][m]=2;
            }

            else
            {
                if(g[l-1][m]>=g[l][m-1])
                {
                   g[l][m]=g[l-1][m];
                   f[l][m]=3;
                }

                else
                {
                    g[l][m]=g[l][m-1];
                    f[l][m]=1;
                }

            }

        }
    }
}

int main()
{
    while(1)
    {
        if(scanf("%s",a[0])==EOF)
            break;

        i=0,j=-1;

        while(scanf("%s",a[++i])!=EOF)
            if(strcmp(a[i],"#")==0)
                break;

        while(scanf("%s",b[++j])!=EOF)
            if(strcmp(b[j],"#")==0)
                break;

        lcs();
        mapping();

        for(int l=t-1;l>=0;l--)
        {
            printf("%s",c[l]);
            if(l>0)
                printf(" ");
            if(l==0)
                printf("\n");
        }
        //cout<<endl;


    }

    return 0;
}



