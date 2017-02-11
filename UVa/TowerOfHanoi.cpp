#include <cstdio>
#include <iostream>

using namespace std;

void tower(char from,char use,char to,int n)
{
    if(n==1)
        printf("%c -> %c\n",from,to);
    else
    {
        tower(from,to,use,n-1);
        printf("%c -> %c\n",from,to);
        printf("%c -> %c\n",use,to);
    }
}

int main()
{
    int n;
    cin>>n;

    tower('A','B','C',n);

    return 0;
}
