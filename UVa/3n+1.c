#include <stdio.h>
#include <string.h>
long long int counter(long long int n)
{
    long long int count=0;
    while(1)
    {
        count++;
        if(n==1)
            break;
        if(n%2!=0)
            n=(3*n)+1;
        else
            n=n/2;

    }
    return count;

}
int main()
{
   long long int j,i,n,f,k,l,m,temp,len,s;
   char c[1000000];

    while(scanf("%lld %lld",&i,&j)!=EOF)
    {
        for(f=i,k=0;f<=j;f++,k++)
        {
            c[k]=counter(f);
        }
        len=strlen(c);
        for(l=0;l<len-1;l++)
        {
            for(m=0;m<len-l-1;m++)
            {
                if(c[m]<c[m+1])
                {
                    temp=c[m];
                    c[m]=c[m+1];
                    c[m+1]=temp;
                }
            }

        }

        printf("%lld %lld %lld\n",i,j,c[0]);
    }


    return 0;
}
