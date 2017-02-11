 #include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>
#include <ctype.h>
#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

#define eps 1e-10
#define PI acos(-1)

int dirx[8]= {-1, 0, 1, -1, 1, -1, 0, 1};
int diry[8]= {-1, -1, -1, 0, 0, 1, 1, 1};

int dx[4]= {-1, 0, 1, 0};
int dy[4]= {0, -1, 0, 1};

int min(int x, int y)
{
    if( x<y) return x;
    else return y;
}

int max(int x, int y)
{
    if( x>y) return x;
    else return y;
}


int main()
{
    int n, i, f;
    int a[13] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 777};
    scanf("%d", &n);
    f=0;
    for(i=0 ; i<13 ; i++) {
        if( a[i]==n) {
            f=1;
            break;
        }
    }
    if(f==1) printf("YES\n");
    else {
        for(i=0 ; i<13 ; i++) {
            if( n%a[i]==0) {
                f=1;
                break;
            }
        }
        if(f==1) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
