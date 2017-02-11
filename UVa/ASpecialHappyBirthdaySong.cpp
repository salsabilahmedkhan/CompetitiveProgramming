
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#include <algorithm>
#include <queue>

using namespace std;

char a[102][102];
char b[16][100]={"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};
int t;
int main()
{
    int i,j,k,len,l,p=1,mod;
    scanf("%d",&t);
    for(i=0;i<t;i++)
        scanf("%s",a[i]);
    if(t>16)
        p=ceil(t/16)+1;

    k=0;
    for(i=0,j=0;j<16*p;i++,j++,k++)
    {
        if(i==t)
            i=0;
        mod=j%16;
        if(mod==0)
            k=0;

        printf("%s: %s\n",a[i],b[k]);
    }

    return 0;
}


