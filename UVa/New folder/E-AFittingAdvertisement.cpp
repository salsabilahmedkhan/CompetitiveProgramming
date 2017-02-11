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

int a[500];

int main()
{
    freopen("input.txt", "r", stdin);

    int t, i, n, j, w, h, cnt1,cnt2;
    scanf("%d", &t);
    for(i=0 ; i<t ; i++) {
        scanf("%d", &n);
        for(j=0 ; j<n ; j++) {
            scanf("%d", &a[j]);
        }
        printf("Case %d:\n", i+1);
        while(scanf("%d %d", &w, &h) && w && h ) {
            cnt1 = 0;cnt2=0;
            for(j=0 ; j<n ; j++) {
                if( a[j] >= w) {
                    cnt1++;
                    if(cnt1>=h)
                        break;
                }
                else {
                    cnt1 = 0;
                }
                if( a[j] >= h) {
                    cnt2++;
                    if(cnt2>=w)
                        break;
                }
                else {
                    cnt2 = 0;
                }
            }
            if(cnt1>=h || cnt2>=w) {
                printf("Accept\n");
            }
            else
                    printf("Reject\n");
        }
    }
    return 0;
}
