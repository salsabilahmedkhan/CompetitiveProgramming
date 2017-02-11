#include <iostream>

using namespace std;

int main()
{
int T;
int n;
int* rungs;
int str;
cin >> T;
for (int i = 1; i <= T; i++)
{
cout << "Case " << i << ": ";
cin >> n;
rungs = new int[n+1];
rungs[0] = 0;
for (int j = 0; j <= n-1; j++)
{
cin >> rungs[j+1];
}
str = -1;
for (int jump = n; jump >= 0; jump--)
{
if (rungs[jump+1] - rungs[jump] == str)
str += 1;
else if (rungs[jump+1] - rungs[jump] > str)
str = rungs[jump+1] - rungs[jump];
}
cout << str << endl;
delete [] rungs;
}
return 0;
}
