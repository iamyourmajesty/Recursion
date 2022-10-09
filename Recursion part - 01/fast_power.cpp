#include<bits/stdc++.h>
using namespace std;
int fast_power(int a,int b)
{
    if(b==0) return 1;
    
    int res= fast_power(a,b>>1);
    
    res = res * res ;//common for both odd and even
    
    if(b&1) res = res * a;//for odd 
    
    return res;
    
}
int main()
{
    int a=3,b=4;
    cout<<fast_power(a,b);
    return 0;
}