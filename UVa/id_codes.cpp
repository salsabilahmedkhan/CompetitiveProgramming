
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#include <algorithm>
#include <queue>

using namespace std;


int main()
{
    char a[100];
    int len;
    while(scanf("%s",a)!=EOF)
    {
        if(strcmp(a,"#")==0)
            break;
            len=strlen(a);
        if(next_permutation(a,a+len))
            printf("%s\n",a);
        else
            printf("No Successor\n");
    }


    return 0;
}


