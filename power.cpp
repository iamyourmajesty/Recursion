#include<bits/stdc++.h>
using namespace std;
int power(int a,int b)
{
    if(b==0 ) return 1;  //base case

    return a * power(a,b-1); //recursive call
}
int main()
{
    int a=3,b=4;
    cout<<power(a,b);
    return 0;
}