#include <cstdio>
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


int main()
{
    int i,j,r,c,c1,c2;
    char a[110][110];
    while(scanf("%d %d",&r,&c)!=EOF)
    {
        if(r==0 && c==0)
            break;
        memset(a,48,sizeof(a));

        for(i=0;i<r;i++)
        {
            scanf("%s",a[i]);
        }
        c2=0;

        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(a[i][j]=='*')
                {
                    c1=0;
                    if(a[i-1][j-1]=='*')
                        c1=1;
                    else if(a[i-1][j]=='*')
                        c1=1;
                    else if(a[i-1][j+1]=='*')
                        c1=1;
                    else if(a[i][j-1]=='*')
                        c1=1;
                    else if(a[i][j+1]=='*')
                        c1=1;
                    else if(a[i+1][j-1]=='*')
                        c1=1;
                    else if(a[i+1][j]=='*')
                        c1=1;
                    else if(a[i+1][j+1]=='*')
                        c1=1;

                    if(c1==0)
                        c2++;
                }
            }
        }

        printf("%d\n",c2);
    }


    return 0;
}



