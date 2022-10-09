#include<bits/stdc++.h>
using namespace std;
int power(int a,int b)
{
    int ans=1;
    for(int i=1;i<=b;i++)
    ans *= a;

    return ans;
}
int main()
{
    int a=2;
    int b=7;
    cout<<power(a,b);
    return 0;
}