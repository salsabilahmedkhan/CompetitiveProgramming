#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    long long int i,len;
    char a[1000],c;
    while(scanf("%s",a))
    {
        if(a[0]=='0')
            break;

        len=strlen(a);
        int l=len;
        long long int sum=0;
        for(i=0;i<len;i++)
        {
            c=a[i]-'0';
            sum=sum+(c*(pow(2,l)-1));
            l--;
        }

    printf("%lld\n",sum);
    }
    return 0;
}
