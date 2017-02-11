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

using namespace std;

#define ll long long
#define pi acos(-1.0)
#define eps 1e-9

int main()
{
    int n, dot, i, j, a[100], sum, bn, b[100], c[100],max, mc, ct;
    while(scanf("%d %d", &dot, &n)!=EOF) {
        for(i=0; i<n; i++)
            scanf("%d", &a[i]);
        bn=pow(2, n)-1;
        //cout<<bn<<endl;
        max=0, mc=0;
        for(i=1; i<=bn; i++) {
            ct=0;
            for(j=0; j<n; j++) {
                if((i&(1<<j))!=0) {
                    b[j]=a[n-j-1];
                    ct++;
                }
                else
                    b[j]=0;
            }
            sum=0;
            for(j=0; j<n; j++)
                sum+=b[j];
            if(sum>=max && sum<=dot && ct>mc) {
                max=sum;
                for(j=0; j<n; j++) {
                    c[j]=b[j];
                }
            }
        }
        for(j=n-1; j>=0; j--){
            if(c[j]!=0)
                printf("%d ", c[j]);
        }
        printf("sum:%d\n", max);
    }
    return 0;
}

