#include<bits/stdc++.h>
using namespace std;
void power_set(string input ,int index,string output)
{
    if(index>=input.length())
    {
        cout<<output<<" ";
        return;
    }
    //exclude
    power_set(input,index+1,output);
    
    char ch=input[index];
    //include
    output.push_back(ch);
    power_set(input,index+1,output);
}
int main()
{
    string str="abc";
    power_set(str,0," ");
    return 0;
}