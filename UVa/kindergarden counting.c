#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char a[100000];
    while(gets(a))
    {
        int i,c1=0,len,j=0;
        len=strlen(a);
        for(i=0;i<len;i=j+1)
        {
            if(isalpha(a[i]))
            {
                while(1)
                {
                    if(!isalpha(a[i]))
                    {
                        c1++;
                        break;
                    }
                    i++;
                }

            }
            j=i;

        }

        printf("%d\n",c1);
    }

    return 0;
}

