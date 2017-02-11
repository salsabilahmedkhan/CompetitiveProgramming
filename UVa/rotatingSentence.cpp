
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#include <algorithm>
#include <queue>

using namespace std;


int main()
{
    char a[101][101],b[101][101];
    int i,j,c=0,l,max=0;
    int k=0;
    while(gets(a[k]))
    {
        c++;
        l=strlen(a[k]);
        if(l>max)
            max=l;

        k++;
    }
    for(i=0;i<max;i++)
    {
        for(j=c-1;j>=0;j--)
        {
            l=strlen(a[j]);
            if(l>i)
                printf("%c",a[j][i]);
            else
                printf(" ");
        }
        printf("\n");
    }


    return 0;
}

