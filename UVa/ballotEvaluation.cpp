#include <cstdio>
#include <iostream>
#include <cstring>
#include <cctype>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <list>
#include <utility>

using namespace std;

#define PI 3.141592653589793
#define pi acos(-1.0)
#define MAX 2000000000
#define pb push_back
#define rep(i,n) for(int i=0;i<(n);i++)
#define repp(i,a,n) for(int i=(a);i<(n);i++)
#define dec(i,n) for(int i=(n);i>0;i--)
#define decc(i,a,n) for(int i=(a);i>(n);i--)
#define Max(a,b) ((a)>(b)?(a):(b))
#define Min(a,b) ((a)<(b)?(a):(b))
#define abs(a) ((a)<0?-(a):(a))
#define sqr(a) ((a)*(a))
#define mem(a,b) memset((a),(b),sizeof(a))

typedef long long int lld;
typedef unsigned int ui;

char a[1000],b[100005],d[10],e[10];

int main()
{
    int p,g,i,j;
    double vp;
    string s;
    char c;
    map<string,int> m;

    while(scanf("%d %d",&p,&g)!=EOF)
    {
        while(p--)
        {
            scanf("%s %lf",a,&vp);
            s=a;
            m[s]=vp;
        }
        int guess=0;
        while(g--)
        {
            guess++;
            printf("Guess #%d ",guess);
            i=0;
            int sum=0;
            while(scanf("%c",&c)!=EOF)
            {
                if(c=='\n')
                    break;
                else if(isalpha(c))
                {
                    b[i++]=c;
                }
                else if(!isalpha(c))
                {
                    b[i]=0;
                    i=0;
                    if(strlen(b))
                        sum=sum+m[b];
                    if(c=='<')
                    {
                        j=0;
                        d[j++]=c;
                    }
                    else if(c=='>')
                    {
                        j=0;
                        d[j++]=c;
                    }
                    else if(c=='=')
                    {
                        if(d[0]=='<' || d[0]=='>')
                            d[j]=c,d[j]=0;
                        else
                            d[0]=c;
                    }
                    else if(c==' ' || c=='+')
                    {
                        j=0;
                        continue;
                    }
                    else if(isdigit(c))
                    {
                        e[j++]=c;
                    }
                }

            }
            e[j]=0;
            int num=atoi(e);
            if(strlen(d)==2)
                {
                    if(d[0]=='<')
                    {
                        if(sum<num)
                            printf("was correct.\n");
                        else
                        {
                            if(sum==num)
                                printf("was correct.\n");
                            else
                                printf("was incorrect.\n");

                        }
                    }
                    else if(d[0]=='>')
                    {
                        if(sum>num)
                            printf("was correct.\n");
                        else
                        {
                            if(sum==num)
                                printf("was correct.\n");
                            else
                                printf("was incorrect.\n");

                        }
                    }
                }
                if(strlen(d)==1)
                {
                    if(d[0]=='>')
                    {
                        if(sum>num)
                            printf("was correct.\n");
                        else
                            printf("was incorrect.\n");

                    }
                    else if(d[0]=='<')
                    {
                        if(sum<num)
                            printf("was correct.\n");
                        else
                            printf("was incorrect.\n");

                    }
                    else if(d[0]=='=')
                    {
                        if(sum==num)
                            printf("was correct.\n");
                        else
                            printf("was incorrect.\n");

                    }
                }
        }
    }

    return 0;
}



