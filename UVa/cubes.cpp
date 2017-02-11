#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int main()
{
    int n,i,j,cube,f;

    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            break;
        f=0;
        for(i=1;i<=100;i++)
        {
            for(j=0;j<i;j++)
            {
                if((pow(i,3)-pow(j,3))==n)
                {
                    f=1;
                    break;
                }
            }
            if(f==1)
                break;
        }
        if(f==1)
            printf("%d %d\n",i,j);
        else
            printf("No solution\n");
    }

    return 0;
}


