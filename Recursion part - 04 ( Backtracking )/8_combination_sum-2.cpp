#include<bits/stdc++.h>
using namespace std;
void print(vector <int> &arr)
{
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void solve(vector <int> &arr,int target,vector <int> &op,int curr)
{
    if(target==0)
    {
        print(op);
        return;
    }
    else if(target<0) return;
    
    for(int i=curr;i<arr.size();i++)
    {
        if(i>curr and arr[i]==arr[i-1])     // line 3
        continue;
        
        op.push_back(arr[i]);
        solve(arr,target-arr[i],op,i+1);  // line 2 
        op.pop_back();
    }
}
int main()
{
    vector<int> candidates= {10,1,2,7,6,1,5};
    int target = 8;
    
    vector <int> op;
    
    sort(candidates.begin(),candidates.end()); // line 1
    solve(candidates,target,op,0);
    return 0;
}

/*
APPROACH : 
line 1 : to get output is sequential order
line 2 : curr kay liyay i+1 pass karo kyo ki each candidate can be use only once
line 3 : to avoid repetation due to candidates with same value  i.e 1 and 1


40. Combination Sum II
Medium
7.3K
178
Companies
Given a collection of candidate numbers (candidates) and a target number (target), find all unique combinations in candidates where the candidate numbers sum to target.

Each number in candidates may only be used once in the combination.

Note: The solution set must not contain duplicate combinations.

 

Example 1:

Input: candidates = [10,1,2,7,6,1,5], target = 8
Output: 
[
[1,1,6],
[1,2,5],
[1,7],
[2,6]
]
Example 2:

Input: candidates = [2,5,2,1,2], target = 5
Output: 
[
[1,2,2],
[5]
]
 

Constraints:

1 <= candidates.length <= 100
1 <= candidates[i] <= 50
1 <= target <= 30

*/