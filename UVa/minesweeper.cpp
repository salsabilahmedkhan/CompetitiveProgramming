
#include <iostream>
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
    int i,j,r,c,k,l,t=0,f=0;
    while(scanf("%d %d",&r,&c)!=EOF)
    {
        if(r==0 && c==0)
            break;
        t++;
        if(f>0)
            printf("\n");
        f++;
        for(i=0;i<r;i++)
        {

            scanf("%s",a[i]);
        }

        memset(b,48,sizeof(b));
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(a[i][j]=='*')
                {
                    for(k=i-1;k<=i+1;k++)
                    {
                        for(l=j-1;l<=j+1;l++)
                        {
                            if(k==i && l==j)
                                continue;
                            else
                            {
                                b[k][l]++;
                            }
                        }
                    }
                }
            }
        }
        printf("Field #%d:\n",t);
       for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(a[i][j]=='*')
                    cout<<a[i][j];
                else
                    cout<<b[i][j];
            }

            cout<<endl;
        }

    }

    return 0;
}


