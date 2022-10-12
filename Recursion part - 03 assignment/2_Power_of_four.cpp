//leetcode problem 342
#include<bits/stdc++.h>
using namespace std;
 bool isPowerOfFour(int n) {
        if (n==0) return false;
        if(n==1) return true;
        else if(n%4!=0) return false;

        n=n/4;
        return isPowerOfFour(n);
    }
int main()
{
    int n=256;
    cout<<boolalpha<<isPowerOfFour(n);
    return 0;
}