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


int main()
{
    char a[205],b[]={'W','H','Q','E','S','T','X'};
    double c[]={1,0.5,0.25,0.125,0.0625,0.03125,0.015625},sum;

    int i,j;

    while(scanf("%s",a)!=EOF)
    {
        if(strcmp(a,"*")==0)
            break;
        sum=0;
        int c1=0;
        for(i=1;a[i];i++)
        {
            if(isalpha(a[i]))
            {
                for(j=0;j<7;j++)
                {
                    if(a[i]==b[j])
                    {
                        sum=sum+c[j];
                        break;
                    }
                }
            }
            if(a[i]=='/')
            {
                if(sum==1)
                    c1++;
                sum=0;
            }
        }
        printf("%d\n",c1);
    }



    return 0;
}



