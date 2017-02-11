#include <cstdio>
#include <iostream>
#include <cstring>
#include <cctype>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <queue>
#include <map>
#include <utility>

using namespace std;

#define PI 3.141592653589793
#define MAX 2000000000

typedef long long int lld;

int func(int arr[][10])
{
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            cout<<arr[i][j]<<endl;
}

int main()
{
    int arr[10][10];
    arr[0][0]=1;
    arr[0][1]=2;
    arr[1][0]=3;
    arr[1][1]=4;
    func(arr);
    return 0;
}
