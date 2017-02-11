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

char a[1000][1000];

int main()
{
    freopen("input.txt", "r", stdin);

    int t, i, w, m, j, k, p, n, cnt, l, wrdFnd;
    scanf("%d", &t);
    for(i=0 ; i<t ; i++) {
        scanf("%d %d", &w, &m);
        memset(a, 0, sizeof(a));
        getchar();
        for(j=0 ; j<m ; j++) {
            gets(a[j]);
        }
        cnt = 0;
        for(j=0 ; j<m ; j++) {
            p=0;n=0;wrdFnd=0;
            l= strlen(a[j]);
            for(k=0 ; k<l ; k++) {
                if( a[j][k] != ' ') {
                    wrdFnd = 1;
                    p++;
                    n++;
                }
                else if( a[j][k] == ' ') {
                    if(wrdFnd == 0)
                        continue;
                    n = n+2;
                    p = 0;
                }
                if( n>= w || k==l-1 && wrdFnd) {
                    if( p == 0 || a[j][k+1] == ' '  ) {
                        n = 0;
                    }
                    else {
                        n = p;
                    }
                    wrdFnd = 0;
                    cnt++;
                }
            }
        }
        printf("Message %d: %d\n", i+1,cnt);
    }
    return 0;
}
