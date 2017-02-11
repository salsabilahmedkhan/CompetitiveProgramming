#include <stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    int i,sum=0,n=0;
    while(scanf("%s",a))
    {
        if(strcmp(a,"*")==0)
        return 0;
        else if(strcmp(a,"Hajj")==0)
            printf("Case %d: Hajj-e-Akbar\n",++n);
        else if(strcmp(a,"Umrah")==0)
        printf("Case %d: Hajj-e-Asghar\n",++n);


    }
    return 0;
}


