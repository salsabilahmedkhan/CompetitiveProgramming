#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
int main()
{
    int i,j,k,n,c,l;
    char a[10000];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    scanf("%s",a);
    l= strlen(a);
    sort(a,a+l);
    printf("%s\n",a);
    while(next_permutation(a,a+l))
    {
        printf("%s\n",a);

    }
    }
    return 0;
}
