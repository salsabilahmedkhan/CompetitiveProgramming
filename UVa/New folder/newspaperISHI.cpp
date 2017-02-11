#include <stdio.h>
#include <iostream>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <algorithm>
#include <stdlib.h>
#include <queue>
#include <stack>
#include <vector>
#include <string>
#include <map>
#include <set>

using namespace std;

#define ll long long
#define pi acos(-1.0)
#define eps 1e-9

int main()
{
    int n, k, m, i, j, v, l, tc, b[300];
    unsigned char c;
    char a[10005];
    double s;
    scanf("%d", &n);
    for(tc=1; tc<=n; tc++) {
        getchar();
        scanf("%d", &k);
        getchar();
        memset(b, 0, sizeof(b));
        for(i=0; i<k; i++) {
            scanf("%u %d", &c, &v);
            getchar();
            b[c]=v;
        }
        scanf("%d", &m);
        getchar();
        long long int sum=0;
        for(i=0; i<m; i++) {
            gets(a);
            l=strlen(a);
            for(j=0; j<l; j++) {
                sum+=b[a[j]];
            }
        }
        s=double(sum)/100;
        printf("%0.2lf$\n", s);
    }
    return 0;
}

