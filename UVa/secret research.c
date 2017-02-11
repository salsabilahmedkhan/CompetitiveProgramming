#include <stdio.h>
#include <string.h>
int main()
{
    int t,i;
    char a[1001];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%s",a);
        int len=strlen(a);
        if((strcmp(a,"1")==0) || (strcmp(a,"4")==0) || (strcmp(a,"78")==0))
            printf("+\n");
        else if((strcmp(a,"135")==0) || (strcmp(a,"435")==0) || (strcmp(a,"7835")==0))
            printf("-\n");
        else if((strcmp(a,"914")==0) || (strcmp(a,"944")==0) || (strcmp(a,"9784")==0))
                printf("*\n");
        else if((strcmp(a,"1901")==0) || (strcmp(a,"1904")==0) || (strcmp(a,"19078")==0))
            printf("?\n");
    }
    return 0;
}
