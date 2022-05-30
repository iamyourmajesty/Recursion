// n = 235 then print digtis seprated by space 2 3 5 
#include<bits/stdc++.h>
using namespace std;
void print_digits(int n)
{
    if(n==0) return ;
    int digit = n % 10;
    print_digits(n/10);
    cout<<digit<<" ";
}
int main()
{
    int n=235;
    print_digits(n);
    return 0;
}