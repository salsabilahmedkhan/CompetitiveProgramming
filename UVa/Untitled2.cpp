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
#include <utility>

using namespace std;

#define PI 3.141592653589793
#define pi acos(-1.0)
#define MAX 2000000000
#define pb push_back

typedef long long int lld;


int main()
{
    long long int j,i,temp,c,max,l,count;

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
            count=0;
            while( true )
            {
                count++;
                if(l==1)
                    break;

                if(l%2!=0)
                    l=(3*l)+1;
                else
                    l=l/2;
                //cout<<l<<endl;

            }
            if(count>max)
                max=count;
        }
        printf("%lld\n",max);

    }

    return 0;
}




