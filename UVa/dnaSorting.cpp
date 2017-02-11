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

int dnaSort(char *dna)
{
    int len=strlen(dna);
    int count=0;
    char temp;
    for(int i=0;i<len-1;i++)
    {
        for(int j=0;j<len-i-1;j++)
        {
            if(dna[j]>dna[j+1])
            {
                temp=dna[j];
                dna[j]=dna[j+1];
                dna[j+1]=temp;
                count++;
            }
        }
    }

    //cout<<count<<endl;

    return count;
}

int main()
{
    int t,n,m,temp1,bl=0,dna_sort[200];
    char dna[200][200],temp2[200],dna2[200];
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d",&n,&m);

        for(int i=0;i<m;i++)
            scanf("%s",dna[i]);

        if(bl>0)
            printf("\n");
        bl++;

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
                dna2[j]=dna[i][j];

            dna_sort[i]=dnaSort(dna2);
        }


        for(int i=0;i<m-1;i++)
        {
            for(int j=0;j<m-i-1;j++)
            {
                if(dna_sort[j]>dna_sort[j+1])
                {
                    //cout<<"shit"<<endl;
                    temp1=dna_sort[j];
                    dna_sort[j]=dna_sort[j+1];
                    dna_sort[j+1]=temp1;

                    strcpy(temp2,dna[j]);
                    strcpy(dna[j],dna[j+1]);
                    strcpy(dna[j+1],temp2);
                }
            }
        }
        for(int i=0;i<m;i++)
            printf("%s\n",dna[i]);

    }


    return 0;
}



