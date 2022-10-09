//  permutation of abc :- abc acb bac bca cab cba
//  print all permutation of a given string
#include<bits/stdc++.h>
using namespace std;

void print_permutation(string input,int current)
{
    if(current>=input.size())
    {
        cout<<input<<" ";
        return;
    }

    for(int i=current;i<input.size();i++)
    {
        swap(input[i],input[current]);
        print_permutation(input,current+1);
    }
}
int main()
{
    string input="abc";
    print_permutation(input,0);
    return 0;
}