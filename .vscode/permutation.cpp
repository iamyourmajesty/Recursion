#include<bits/stdc++.h>
using namespace std;
void solve(string str,int i)
{
    if(i>=str.length())
    {
        cout<<str<<" ";
        return;
    }

    // try it with
    // exclude -> swap mt karo
    // include -> swap karo
    for(int j=i;j<str.size();j++)
    {
        swap(str[i],str[j]);
        solve(str,i+1);
        
    }
}
int main()
{
    string str="abc";
    solve(str,0);
    return 0;
    
}