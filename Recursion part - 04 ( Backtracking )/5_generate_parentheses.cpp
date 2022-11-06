#include<bits/stdc++.h>
using namespace std;

void solve(int n,string &str,int left,int right)
{
    if(left>=n and right>=n)
    {
        cout<<str<<endl;
        return;
    }
    
   //left 
   if(left<n)
   {
       str += "(";
   solve(n,str,left+1,right);
   str.pop_back();
   }
   
   
   //right
   if(left>right and right<n)
   {
       str += ")";
       solve(n,str,left,right+1);
      str.pop_back();
   }
   
    
}

int main()
{
    int n=3;
    string str="";
    solve(n,str,0,0);
    // cout<<"hell";
    return 0;
    
}

// https://practice.geeksforgeeks.org/problems/generate-all-possible-parentheses/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
/*
Given an integer N representing the number of pairs of parentheses, the task is to generate all combinations of well-formed(balanced) parentheses.


Example 1:

Input:
N = 3
Output:
((()))
(()())
(())()
()(())
()()()
Example 2:
Input:
N = 1
Output:
()

Your Task:  
You don't need to read input or print anything. Complete the function AllParenthesis() which takes N as input parameter and returns the list of balanced parenthesis.

Expected Time Complexity: O(2N * N).
Expected Auxiliary Space: O(2*N*X), X = Number of valid Parenthesis.

Constraints:
1 ≤ N ≤ 12

*/