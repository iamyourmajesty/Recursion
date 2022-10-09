#include<bits/stdc++.h>
using namespace std;
void print_integer(int n)
{
    if(n==0) return;
    
    print_integer(n-1);
    cout<<n<<" ";
}
int main()
{
    int n=5;
    print_integer(n);
    return 0;
}