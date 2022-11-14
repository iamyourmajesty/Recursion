#include<bits/stdc++.h>
using namespace std;
void print(vector <int> &arr)
{
    for(int i=0;i<arr.size();i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}
void solve(vector <int> &arr,int target ,vector <int> &op,int curr,int key)
{
    if(target==0 and key==0)
    {
        print(op);
        return;
    }
    else if(target<0 or key<0) return;
    
    for(int i=curr;i<arr.size();i++)
    {
        op.push_back(arr[i]);
        solve(arr,target-arr[i],op,i+1,key-1); //line 2 
        op.pop_back();
    }
}
int main()
{
    std::vector<int> arr={1,2,3,4,5,6,7,8,9};
    int target = 9;
    int k=3;
    
    
    vector <int> op;
    
    solve(arr,target,op,0,k);
    return 0;
}

/*






216. Combination Sum III
Medium
4.4K
93
Companies
Find all valid combinations of k numbers that sum up to n such that the following conditions are true:

Only numbers 1 through 9 are used.
Each number is used at most once.
Return a list of all possible valid combinations. The list must not contain the same combination twice, and the combinations may be returned in any order.

 

Example 1:

Input: k = 3, n = 7
Output: [[1,2,4]]
Explanation:
1 + 2 + 4 = 7
There are no other valid combinations.
Example 2:

Input: k = 3, n = 9
Output: [[1,2,6],[1,3,5],[2,3,4]]
Explanation:
1 + 2 + 6 = 9
1 + 3 + 5 = 9
2 + 3 + 4 = 9
There are no other valid combinations.
Example 3:

Input: k = 4, n = 1
Output: []
Explanation: There are no valid combinations.
Using 4 different numbers in the range [1,9], the smallest sum we can get is 1+2+3+4 = 10 and since 10 > 1, there are no valid combination.
 

Constraints:

2 <= k <= 9
1 <= n <= 60




APPROACH : 
1. we want to use the value only one time so we will take curr i+1

2. we want the ans seq to be of only k size 
     1. we can use store by cheacking size 
     2. we can restrict size i.e only store ans when target == 0 and k==0 ,
        also if target < 0 or k < 0 return 


*/