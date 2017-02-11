#include <stdio.h>
#include <string.h>

int m[1009], b[1009];

int main()
{
    int n, i, j, k, f, d, q, p;
    while(scanf("%d", &n))
    {
        if(n==0) break;
        memset(b, 0, sizeof b);
        j=1;k=0;f=0;q=0;
        for(i=0 ; i<n ; i++) {
            scanf("%d", &d);
            for(p=k-1 ; p>=0 ; p--) {
                if(q==1 && b[p]==j) {
                    m[j]=b[k-1];
                    k--;
                    j++;
                }
            }
            if(j==d) {
                m[j]=d;
                j++;
                q=1;
            }
            else {
                b[k++]= d;
                q=1;
            }
        }
        int p;
       if(k>0) {
            for(i=j, p=k-1 ; p>=0 ; p--, i++) m[i]= b[p];
        }
        //for(i=1 ; i<=n ; i++) printf("%d ", m[i]);
        for(i=1 ; i<=n ; i++) if( m[i]!=i) f=1;
        if(f==1) printf("no\n");
        else printf("yes\n");
        for(i=1 ; i<=n ; i++) m[i]=0;
    }
    return 0;
}
