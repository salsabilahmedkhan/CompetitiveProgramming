#include <cstdio>
#include <iostream>
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

struct point
{
    int x;
    int y;
};


int main()
{
    int t;
    typedef struct point point;
    point p1,p2,p3,p4;

    scanf("%d",&t);
    while(t--)
    {
      scanf("%d %d %d %d %d %d %d %d",&p1.x,&p1.y,&p2.x,&p2.y,&p3.x,&p3.y,&p4.x,&p4.y);
      if(p1==p2 && p3==p4)
        printf("LINE\n");
    }


    return 0;
}



