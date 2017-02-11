
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#include <algorithm>
#include <queue>

using namespace std;

#define PI 3.141592653589793
#define MAX 2000000000

typedef long long int lld;

int main()
{
    int t,len,i,f,rear;
    char a[200],b[200];

    scanf("%d\n",&t);
    while(t--)
    {

        //memset(b,0,sizeof(b));
        rear=0,f=0;
        gets(a);
        len=strlen(a);
        for(i=0;i<len;i++)
        {

            if(a[i]=='(' || a[i]=='[')
            {
                b[rear++]=a[i];

            }
            if(a[i]==')')
            {
                if(b[rear-1]=='(')
                        rear--;
                else
                {
                    f=1;
                    break;
                }
            }
            if(a[i]==']')
            {

                if(b[rear-1]=='[')
                        rear--;

                else
                {
                    f=1;
                    break;
                }
            }

        }

        if(f==0 && rear==0)
            printf("Yes\n");
        else
            printf("No\n");

    }


    return 0;
}


