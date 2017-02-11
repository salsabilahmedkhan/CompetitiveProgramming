#include <cstdio>
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

int cmp(const void* a,const void* b)
{
    return (*(char*)a-*(char*)b);
}


int main()
{
    int t,j,c[100000],k;
    scanf("%d",&t);
    char a[100000],b[60];

    for(j=1,k=0;j<=52;j+=2)
    {
        b[j]='A'+k;
        k++;
    }

    for(j=2,k=0;j<=52;j+=2)
    {
        b[j]='a'+k;
        k++;
    }

    while(t--)
    {
        scanf("%s",a);
        int i;
        int len=strlen(a);
        for(i=0;i<len;i++)
        {
            for(j=1;j<53;j++)
            {
                if(a[i]==b[j])
                    c[i]=j;
            }
        }

        qsort(c,len,sizeof(int),cmp);
        for(i=0;i<len;i++)
            printf("%c",b[c[i]]);
        printf("\n");

        while(next_permutation(c,c+len))
        {
            for(i=0;i<len;i++)
            printf("%c",b[c[i]]);
            printf("\n");
        }
    }


    return 0;
}



