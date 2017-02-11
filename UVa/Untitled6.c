#include <stdio.h>
#include <string.h>

int main()
{
    char a[1000];
    int i,len,f=0;
    long long int sum=0;
    while(scanf("%s",a)!=EOF)
    {
        f=0;
        len=strlen(a);
        for(i=0;i<len;i++)
        {
            if(a[i]>96 || a[i]<122)
            {
                a[i]=a[i]-96;
            }
            else if(a[i]>64|| a[i]<91)
            {
                a[i]=a[i]-38;
            }
        }
        for(i=0;i<len;i++)
        {
            sum=sum+a[i];
        }

        if(sum==0)
            f=1;
        for(i=2;i<=sum;i++)
        {
            if(sum%i==0)
                f=1;
        }
        if(f==1)
            printf("It is not a prime word.\n");
        else
            printf("It is a prime word.\n");

    }

    return 0;
}
