#include <stdio.h>

using namespace std;

int main()
{
    char a[]="i am .";
    char b[20],c[10],d;
    int i;
    sscanf(a,"%s %s %c",b,c,&d);
    printf("%s %s %c\n",b,c,d);

    return 0;

}
