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


int main()
{
    int t,n,k;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&k);
        int empty=n-k;
        int min=empty/(k-1);
        printf("%d\n",min);
    }


    return 0;
}



