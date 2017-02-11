#include <stdio.h>
#include <string.h>
#include<math.h>

int prime(n)
{
    int i;
    if(n==2)
        return 1;
    if(n%2==0)
        return 0;
    for(i=3;i<=sqrt(n);i=i+2)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;

}

int main()
{
    char a[1000];
    int i,len,p;

    while(scanf("%s",a)!=EOF)
    {
        long long int sum=0;
        len=strlen(a);
        for(i=0;i<len;i++)
        {
            if(a[i]>='a' && a[i]<='z')
            {
                a[i]=a[i]-'a'+1;
            }
            else if(a[i]>='A' && a[i]<='Z')
            {
                a[i]=a[i]-'A'+27;
            }
        }
        for(i=0;i<len;i++)
        {
            sum=sum+a[i];
        }

        p=prime(sum);

        if(p==1 || sum==1)
            printf("It is a prime word.\n");
        else if(p==0)
            printf("It is not a prime word.\n");

    }

    return 0;
}

