#include<bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    //base case
    if(n==0 or n==1) return 1;
    //recursive call
    return n*factorial(n-1);
}
int main()
{
    int n=5;
    cout<<factorial(n);
    return 0;
}