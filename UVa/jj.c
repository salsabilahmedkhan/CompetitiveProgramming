#include <stdio>
//using namespace std;
int ab( int n );

int main()
{
int n;

while(scanf(“%d”,&n)==1)
{

int array[n+1],count=0,diff[n+1];

for(int i=1;i<=n;i++)
{
scanf(“%d”,&array[i]);
}

for(int i=1;i<=n;i++)
{
diff[i]=ab(array[i]-array[i+1]);
}

for(int i=1;i<n;i++)
for(int j=1;j<n;j++)
{
if(diff[j]>diff[j+1])
{
int temp=diff[j];
diff[j]=diff[j+1];
diff[j+1]=temp;
}
}

for(int i=1;i<n;i++)
{
if(diff[i]!=i)
{
count++;
}

}

if(count!=0)

printf(“Not jolly\n”);
else

printf(“Jolly\n”);
}
return 0;
}

int ab( int n )
{
if( n < 0 )

return -n;

else

return n;
}
