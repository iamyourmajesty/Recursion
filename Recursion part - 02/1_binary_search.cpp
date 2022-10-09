#include<bits/stdc++.h>
using namespace std;
void reverse_str(string &str,int s,int e)
{
    if(s>e) return; //base case

    swap(str[s],str[e]);
    s++;                    //processing
    e--;


    reverse_str(str,s,e); // recursive call
}
int main()
{
    string str="prince";
    reverse_str(str,0,str.size()-1);

    cout<<str;
    return 0;
}