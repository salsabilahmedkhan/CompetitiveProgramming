#include <stdio.h>
int main()
{
    int n,i,s=0;
    while(scanf("%d",&n)!=EOF)
    {
        if(n<0)
            break;
        s++;
        int c=0;
        if(n==1)
            printf("Case %d: %d\n",s,0);
        else
        {
            i=1;
        while(1)
        {
            c++;
            if(i*2>=n)
                break;
            i=i*2;
        }
        printf("Case %d: %d\n",s,c);
        }

    }

    return 0;
}
