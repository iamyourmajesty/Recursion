#include<bits/stdc++.h>
using namespace std;

void solve(string &str,string output, set <string> &ans,map <int,bool> &flag)
{
    for(int i=0;i<str.size();i++)
    {
        if(flag[i]==0)
        {
            output.push_back(str[i]);
            ans.insert(output);
            flag[i]=1;
            solve(str,output,ans,flag);
            output.pop_back();
            flag[i]=0;
        }
    }
}
int main()
{
    string str="AAB";
    set <string> ans;
    string output;
    map <int ,bool> flag;
    solve(str,output,ans,flag);
    
    cout<<ans.size();
    
    return 0;
}

// https://leetcode.com/problems/letter-tile-possibilities/submissions/837914652/