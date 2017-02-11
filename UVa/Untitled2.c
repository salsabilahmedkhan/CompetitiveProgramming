#include <stdio.h>
#include <string.h>
int sum3(int a)
{
    int i,b;
    b=a%10;
    for(i=a;a/10;i++)
    {
        a=a/10;
        b=b+a%10;

    }
    return b;
}

int sum4(int a)
{
    int i,b;
    b=a%10;
    for(i=a;a/10;i++)
    {
        a=a/10;
        b=b+a%10;

    }
    return b;

}

int main()
{
    char a[1000],b[1000],c[1000],d[1000];
    while(gets(a))
    {
        gets(b);
        int l1,l2,i,l,m;
        l1=strlen(a);
        l2=strlen(b);
        int j=0,k=0;


        for(i=0;i<l1;i++)
        {
            if(a[i]>='a' && a[i]<='z')
            {
                j=j+a[i]-'a'+1;
            }
            else if(a[i]>='A' && a[i]<='Z')
            {
                j=j+a[i]-'A'+1;
            }
        }
        for(i=0;i<l2;i++)
        {
            if(b[i]>='a' && b[i]<='z')
            {
                k=k+b[i]-'a'+1;
            }
            else if(b[i]>='A' && b[i]<='Z')
            {
                k=k+b[i]-'A'+1;
            }
        }

        for(l=j;l>9;l=sum3(l));
        for(m=k;m>9;m=sum4(m));

        float f;
        if(l<m)
        {
            f=(float)l/(float)m;
            f=f*100;
        }
        else
        {
            f=(float)m/(float)l;
            f=f*100;
        }

        printf("%0.2f %%\n",f);
    }

    return 0;
}

