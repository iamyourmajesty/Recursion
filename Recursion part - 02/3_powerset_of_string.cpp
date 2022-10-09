#include<bits/stdc++.h>
using namespace std;
void power_set(string input,string output,int i)
{
    if(i>=input.size())
    {
        cout<<output<<" ";
        return;
    }

    //exclude
    power_set(input,output,i+1);

    //include
    output.push_back(input[i]);
    power_set(input,output,i+1);
}
int main()
{
    string str="abc";
    power_set(str,"",0);
    return 0;
}
/*
power set is a set of all subset - 2^n
powerset/subsequence of
"abc"  :-
" "
a
b
c
ab
bc
ca
abc

*/