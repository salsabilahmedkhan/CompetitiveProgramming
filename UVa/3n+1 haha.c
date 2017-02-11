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
   long long int j,i,temp,c,max,l;

    while(scanf("%lld %lld",&i,&j)!=EOF)
    {
        printf("%lld %lld ",i,j);
        if(i>j)
        {
            temp=i;i=j;j=temp;
        }
        max=0;
        for(l=i;l<=j;l++)
        {
            c=counter(l);
            if(c>max)
                max=c;
        }
        printf("%lld\n",max);

    }


    return 0;
}
