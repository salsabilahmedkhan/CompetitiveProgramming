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
       else if(strlen(a)>2 && a[len-1]=='5' && a[len-2]=='3')
            printf("-\n");
       else if(strlen(a)>2 && a[len-1]=='4' && a[0]=='9')
        printf("*\n");
       else
        printf("?\n");
    }

    return 0;
}
