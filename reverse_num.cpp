// n=368 then its reverse will be 863
#include<bits/stdc++.h>
using namespace std;
int reverse_num(int n)
{
    static int res =0;// static keyword kyo use kiyay socho

    if(n==0) return res;


    int digit=n%10;

    res = res * 10 + digit;

    reverse_num(n/10);

    
}
int main()
{
    int n=3698;
    cout<<reverse_num(n);
    return 0;
}