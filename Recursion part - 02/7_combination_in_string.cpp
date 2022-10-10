#include<bits/stdc++.h>
using namespace std;
void solve(string input,string output,int i)
{
    if(output.size()>=0 and output[0]=='_') return;
    if(i>=input.size())
    {
        cout<<output<<endl;
        output="";
        return;
    }
    
    //exclude
    output.push_back(input[i]);
    solve(input,output,i+1);
    output.pop_back();
    
    //include
    output.push_back('_');
    output.push_back(input[i]);
    solve(input,output,i+1);
}
int main()
{
    string input="123";
    string output="";
    solve(input,output,0);
    return 0;
}

/*
print combination of string
input :-      "123"

output :-     123
              12_3
              1_23
              1_2_3  


*/
  