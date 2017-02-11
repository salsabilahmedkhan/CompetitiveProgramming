#include <cstdio>
#include <iostream>
#include <cstring>
#include <cctype>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <list>
#include <utility>

using namespace std;

#define PI 3.141592653589793
#define pi acos(-1.0)
#define MAX 2000000000
#define pb push_back

typedef long long int lld;

int main()
{

    int m,n;
    while(scanf("%d %d",&m,&n)!=EOF)
    {
        if(m==1 && n==1)
            break;
        int xR=1,yR=0,xL=0,yL=1,x=1,y=1;

        while(!(m==x && n==y))
        {
            if(x*n>y*m)
            {
                printf("L");
                xR=x;
                yR=y;
            }
            else if (x*n<y*m)
            {
                printf("R");
                xL=x;
                yL=y;
            }
            x=xR+xL;
            y=yR+yL;
        }
        printf("\n");
    }

    return 0;
}



