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
    long long int j,i,temp,c,max,n,count;

    while(scanf("%lld %lld",&i,&j)!=EOF)
    {
        printf("%lld %lld ",i,j);
        if(i>j)
        {
            temp=i;i=j;j=temp;
        }
        max=0;
        for(n=i;n<=j;n++)
        {
            count=0;
            int k=n;
            while( true )
            {
                count++;
                if(k==1)
                    break;

                if(k%2!=0)
                    k=(3*k)+1;
                else
                    k=k/2;
                //cout<<n<<endl;

            }
            if(count>max)
                max=count;
        }
        printf("%lld\n",max);

    }

    return 0;
}



