#include <stdio.h>
#include <string.h>
char b[1000];

void rev(char b[],int n)
{
    int m,i,y;
    m=(n-1)/2;
    if(n%2==0)
    {
        for(i=0;i<=m;i++)
        {
            y=b[i];
            b[i]=b[2*m+1-i];
            b[2*m+1-i]=y;
        }
    }
    else
    {
        for(i=0;i<=m;i++)
        {
            y=b[i];
            b[i]=b[2*m-i];
            b[2*m-i]=y;
        }
    }

    printf("%s",b);


    return;
}


int main()
{
    int n,i,len,y,m;
    char a[1000];
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            break;
        scanf("%s",&a);
        len=strlen(a);
        int j=0;
        y=len/n;
        for(i=1;i<=len;i++)
        {
            b[j]=a[i-1];
            j++;
            if(i%y==0)
            {
                b[j]='\0';
                rev(b,y);

                j=0;
            }

        }
        printf("\n");
    }

    return 0;
}
