#include<bits/stdc++.h>
using namespace std;
void solve(string str,int n,int i)
{
    if(i>=n)
    {
        cout<<str<<endl;
        return;
    }
    //putting 0 as bit
    str.push_back('0');
    solve(str,n,i+1);
    //backtrack
    str.pop_back();

    //putting 1 as bit
    str.push_back('1');
    solve(str,n,i+1);
}
int main()
{
    int n=2;
    string str="";
    solve(str,n,0);
    return 0;
}
/*
Genrating all string of n
eg-> 2
    00
    01
    10
    11

    if you will use array u don't have to do any backtrack
    and if your use vector u have to backtrack
        */