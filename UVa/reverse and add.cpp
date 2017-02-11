#include <stdio.h>
#include <string.h>
int main()
{
    char a[20],b[20],c[20];
    int t,i,j,k,len,l1,s,c2,c1,l,cmp;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%s",a);
        len=strlen(a);


        for(j=0,k=len-1;k>=0;j++,k--)
            b[j]=a[k];
        b[j]='\0';

        s=0,c2=0;
        cmp=strcmp(a,b);

            while(cmp!=0)
            {
                c1=0;
                c2++;
                k=0;
                for(j=len-1;;j--)
                {
                    c[k]=(((a[j]-'0')+(b[j]-'0')+c1)%10)+'0';
                    c1=((a[j]-'0')+(b[j]-'0')+c1)/10;

                    k++;
                    if(j==0)
                    {
                        if(c1!=0)
                        {
                            c[k]=c1+'0';
                            break;
                        }
                        else
                            break;
                    }
                }
                if(c1==0)
                    c[k]='\0';
                else
                    c[k+1]='\0';


                len=strlen(c);
                for(j=0,l=len-1;j<len;j++,l--)
                {
                    a[j]=c[j];
                    b[l]=c[j];
                }
                a[len]='\0';
                b[len]='\0';


                cmp=strcmp(a,b);
            }


        printf("%d %s\n",c2,a);
    }

    return 0;
}
