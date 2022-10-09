#include<bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    
    if(n==0 or n==1) return 1; //base case
    
    return n*factorial(n-1); //recursive call
}
int main()
{
    int n=5;
    cout<<factorial(n);
    return 0;
}