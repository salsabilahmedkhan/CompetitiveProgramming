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

int a[105][105],b[105][105];

void sum(int n)
{
    int i,j;
    b[0][0]=a[0][0];


    for(i=1;i<n;i++)
    {
        b[0][i]=a[0][i]+b[0][i-1];

    }
    for(i=1;i<n;i++)
    {
        b[i][0]=a[i][0]+b[i-1][0];

    }
    for(i=1;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            b[i][j]=b[i-1][j]+b[i][j-1]-b[i-1][j-1]+a[i][j];
        }
    }

}
int main()
{
    int n,i,j,e,f,g,h,c,d;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                scanf("%d",&a[i][j]);
        }
        sum(n);
        /*for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                printf("%d ",b[i][j]);

            printf("\n");
        }*/
        int sum1,max=-1000;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                for(c=i;c<n;c++)
                {
                    for(d=j;d<n;d++)
                    {
                        sum1=b[c][d]-b[i-1][d]-b[c][j-1]+b[i-1][j-1];
                        if(sum1>max)
                        {
                            max=sum1;
                            e=i;f=j;g=c;h=d;
                        }
                    }

                }

            }
        }
        /*for(i=e;i<=g;i++)
        {
            for(j=f;j<=h;j++)
            {
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }*/
        printf("%d\n",max);

    }


    return 0;
}



