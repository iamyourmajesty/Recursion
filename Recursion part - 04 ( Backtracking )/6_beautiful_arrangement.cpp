#include<bits/stdc++.h>
using namespace std;
//  METHOD - 1
// bool is_beautiful(vector <int> &arr)
// {
//     int index,value;
//     for(int i=0;i<arr.size();i++)
//     {
//         index = i+1;
//         value = arr[i];
//         if((index%value!=0) and (value%index!=0))
//         return false;
//     }
//     return true;
// }

void solve(vector <int> &arr,int curr,int &ans)
{
    if(curr>=arr.size())
    {
        // if(is_beautiful(arr))
        ans= ans +1;
        return;
    }

    int index,value;

    for(int i=curr;i<arr.size();i++)
    {
        
        index = curr+1;
        value = arr[i];                                     // METHOD - 2
        if((index%value!=0) and (value%index!=0))
        continue;
        
        swap(arr[i],arr[curr]);

        // value=arr[curr];
        // index = curr+1;//one indexed
        // if((index%value==0) or (value%index==0))
        solve(arr,curr+1,ans);

        swap(arr[i],arr[curr]);
    }
}

int countArrangement(int n) {
    vector <int> arr;
    for(int i=1;i<=n;i++)
    arr.push_back(i);

        
    int ans=0;
    solve(arr,0,ans);

    return ans;
}


int main()
{
    int n=4;
    cout<<countArrangement(n);
    return 0;
}

// leetcode problem 526
/*
526. Beautiful Arrangement
Medium
2.6K
320
Companies
Suppose you have n integers labeled 1 through n. A permutation of those n integers perm (1-indexed) is considered a beautiful arrangement if for every i (1 <= i <= n), either of the following is true:

perm[i] is divisible by i.
i is divisible by perm[i].
Given an integer n, return the number of the beautiful arrangements that you can construct.

 

Example 1:

Input: n = 2
Output: 2
Explanation: 
The first beautiful arrangement is [1,2]:
    - perm[1] = 1 is divisible by i = 1
    - perm[2] = 2 is divisible by i = 2
The second beautiful arrangement is [2,1]:
    - perm[1] = 2 is divisible by i = 1
    - i = 2 is divisible by perm[2] = 1
Example 2:

Input: n = 1
Output: 1
 

Constraints:

1 <= n <= 15

*/