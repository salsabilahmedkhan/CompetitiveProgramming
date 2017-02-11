#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    char a[1000],b[1000];
    int i,j;
    while(scanf("%s %s",&a,&b)!=EOF)
    {
        int bulls=0,cows=0;
        for(i=0;i<4;i++)
        {
            if(a[i]==b[i])
            {
                bulls++;
            }
        }
        for(i=0;i<4;i++)
        {
            for(j=0;j<4;j++)
            {
                if(a[i]==b[j])
                    cows++;
            }
        }
        printf("%d %d\n",bulls,cows-bulls);
    }

    return 0;
}
