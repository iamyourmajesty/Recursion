#include<bits/stdc++.h>
using namespace std;
int fast_power(int a,int b)
{
    //base case
    if(b==0) return 1;
    else if(b==1) return a;

    //odd
    if(b&1)
    return a*fast_power(a*a,b>>1);
    //else even
    return fast_power(a*a,b>>1);
}
int main()
{
    int a = 2;
    int b= 11;
    cout<<fast_power(a,b);
    return 0;
}

// since we are naming it as fast power ,though we must use iterative approach to make is more faster