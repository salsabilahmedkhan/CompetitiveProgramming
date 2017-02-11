#include <stdio.h>
#include <string.h>
int main(){
char a[10000],b[10000];
long long int n,i,j,k,l,d;
while(scanf("%lld %s",&n,a)==2){
        if(n==0)
        break;
l=strlen(a);
d=l/n;
k=0;
for(i=d-1;i<l;i += d){
    for(j=i;j>i-d;j--)
        b[k++]=a[j];
}
b[k++]=0;
printf("%s\n",b);
}
return 0;
}
