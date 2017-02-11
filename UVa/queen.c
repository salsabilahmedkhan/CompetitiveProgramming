#include <stdio.h>
#include <math.h>
int main()
{
    int x1,x2,y1,y2;
    while(scanf("%d %d %d %d",&x1,&y1,&x2,&y2)!=EOF)
    {
        if(x1==0 && y1==0 && x2==0 && y2==0)
            break;
        int moves;
        int d1,d2;
        d1=fabs(x1-x2);
        d2=fabs(y1-y2);
        if(x1==x2 && y1==y2)
            moves=0;
        else if(x1==x2 && y1!=y2)
            moves=1;
        else if(x1!=x2 && y1==y2)
            moves=1;
        else if(x1!=x2 && y1!=y2)
        {
            if(d1==d2)
                moves=1;
            else
                moves=2;
        }
        printf("%d\n",moves);
    }

    return 0;
}
