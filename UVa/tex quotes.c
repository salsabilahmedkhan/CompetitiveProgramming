#include <stdio.h>
#include <string.h>
int main()
{
    char a[100000];
    int i,len,count=1;
    while(gets(a))
    {

        len=strlen(a);
        for(i=0;i<len;i++)
        {
            if(a[i]=='"')
            {
                count++;
                if(count%2==0)
                    printf("``");
                else if(count%2!=0)
                    printf("''");
            }

            else printf("%c",a[i]);
        }

        printf("\n");
    }

    return 0;
}
