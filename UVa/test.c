#include <stdio.h>
#include <string.h>
int main()
{
    char t[100],i;
    memset(t,'1',100);

    for(i=0;i<100;i++)
    {
        printf("%c",t[i]);
    }

    return 0;
}
