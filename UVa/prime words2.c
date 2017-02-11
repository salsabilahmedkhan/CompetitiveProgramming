#include <stdio.h>
#include <string.h>

int main()
{
    char a[50];
    int i,len,f=0;

    while(scanf("%s",a)!=EOF)
    {
        long long int sum=0;
        f=0;
        len=strlen(a);
        for(i=0;i<len;i++)
        {
            if(a[i]>='a' && a[i]<='z')
            {
                a[i]=a[i]-'a'+1;
            }
            else if(a[i]>'A' && a[i]<'Z')
            {
                a[i]=a[i]-'A'+27;
            }
        }
        for(i=0;i<len;i++)
        {
            sum=sum+a[i];
        }

        if(sum==0)
            f=1;
        for(i=2;i<sum;i++)
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
