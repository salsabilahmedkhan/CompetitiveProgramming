#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    int arr[100];
    memset(arr,-1,sizeof(arr));
    for(i=0;i<100;i++) printf("%d\n",arr[i]);

    return 0;
}
