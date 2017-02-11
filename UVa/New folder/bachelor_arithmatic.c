#include<stdio.h>
int main()
{
    double b,s,f,l;
    int t;
    t=1;
    while(scanf("%lf %lf",&b,&s)==2)
    {
        if(b==0 && s==0)
        break;
        else if(b==0 || b==1)
        printf("Case %d: :-\\\n",t);
        else if(b<=s)
        printf("Case %d: :-|\n",t);
        else if(b>s)
        printf("Case %d: :-(\n",t);
        t++;}


    return 0;
}
