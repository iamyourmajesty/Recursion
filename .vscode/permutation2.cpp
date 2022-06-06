#include<bits/stdc++.h>
using namespace std;
void solve(string &str,int i)
{
    if(i>=str.length())
    {
        cout<<str<<" ";
        return;
    }
    for(int j=i;j<str.size();j++)
    {
        swap(str[i],str[j]);
        solve(str,i+1);
        //backtracking -> undo -> recurcive call s phlay jo change hua ha usko undo/unchange karo
        swap(str[i],str[j]);
    }
}
int main()
{
    string str="abc";
    solve(str,0);
    return 0;
}