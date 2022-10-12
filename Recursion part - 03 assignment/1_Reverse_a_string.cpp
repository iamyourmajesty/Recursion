//leetcode problem 344
#include<bits/stdc++.h>
using namespace std;
void rev_string(vector <char> & s,int start,int end){

    if(start>end)return;

    swap(s[start],s[end]);
    start++;
    end--;

    rev_string(s,start,end);

}
int main()
{
   vector <char> s={'h','e','l','l','o'};
    int start=0;
    int end=5-1;
    rev_string(s,start,end);
    
    for(auto x:s)
    cout<<x;
    return 0;
}