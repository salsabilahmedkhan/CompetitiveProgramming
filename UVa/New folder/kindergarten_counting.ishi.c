#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char a[10000];
    int l, i, j;
    while(gets(a)) {
        l=strlen(a);
        int count=0;
        for(i=0; i<l; i=j+1) {
            if(isalpha(a[i])) {
                for(; ;i++) {
                    if(!isalpha(a[i])) {
                        count++;
                        break;
                    }
                }
            }
            j=i;
        }
        printf("%d\n", count);
    }
    return 0;
}
