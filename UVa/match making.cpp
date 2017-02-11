#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
    int x,y,i=0,d,j;
    int b[10001],s[10001];
    while(scanf("%d %d",&x,&y)!=EOF)
    {
        if(x==0 && y==0)
            break;
        i++;

        for(j=0;j<x;j++)
            scanf("%d",&b[j]);

        for(j=0;j<y;j++)
            scanf("%d",&s[j]);

        sort(b,b+x);

        if(x==y)
            printf("Case %d: 0\n",i);

        else if(x<y)
            printf("Case %d: 0\n",i);
        else
        {
            d=x-y;
            printf("Case %d: %d %d\n",i,d,b[0]);
        }
    }

    return 0;
}
