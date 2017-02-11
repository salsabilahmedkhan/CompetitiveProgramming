#include <stdio.h>

int a[10000][10000];

int main()
{
    int T, N, P, h, i, j, k, x;
    scanf("%d", &T);
    for(i=1; i<=T; i++) {
        scanf("%d", &N);
        scanf("%d", &P);
        for(j=1; j<=P; j++) {
            for(k=1; k<=N; k++)
                a[j][k]=0;
        }
        for(j=1; j<=P; j++) {
            scanf("%d", &h);
            for(k=h; k<=N; k=k+h)
                a[j][k]++;
            for(k=6, x=7; x<=N; k=k+7, x=x+7) {
                a[j][k]=0;
                a[j][x]=0;
            }
        }
        int c=0;
        for(k=1; k<=N; k++) {
            for(j=1; j<=P; j++) {
                if(a[j][k]==1) {
                    c++;
                    break;
                }
            }
        }
        printf("%d\n", c);
    }
    return 0;
}
