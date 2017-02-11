#include <stdio.h>
#include <ctype.h>
int main()
{
    char a;
    while(scanf("%c",&a)!=EOF)
    {
        if(isalpha(a))
            printf("%d %c\n",a,a);
        else
            printf("no\n");
    }

    return 0;
}
