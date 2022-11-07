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

bool isSame(vector <int> &arr)
{
    int n=arr.size();
    int left_side_sum = 0;
    int right_side_sum =0;

    for(int i=0;i<n/2;i++)
    {
        if(arr[i])
        left_side_sum++;
    }

    for(int i=n/2;i<n;i++)
    {
        if(arr[i])
        right_side_sum++;
    }

    return left_side_sum==right_side_sum;
}


void solve(vector<int> arr,int left,int right,int &ans,int left_sum,int right_sum)
{
    //base case
    if(left>right)
    {
        if(left_sum==right_sum)
        ans++;

        /*
        if(isSame(arr))
        ans++;

        //then we don't need left_sum and right_sum
        */
        return;
    }
    
    arr[left]=0;
    arr[right]=0;
    solve(arr,left+1,right-1,ans,left_sum,right_sum);
    
    arr[left]=1;
    arr[right]=1;
    solve(arr,left+1,right-1,ans,left_sum+1,right_sum+1);
    
    arr[left]=1;
    arr[right]=0;
    solve(arr,left+1,right-1,ans,left_sum+1,right_sum);
    
    arr[left]=0;
    arr[right]=1;
    solve(arr,left+1,right-1,ans,left_sum,right_sum+1);
    
}
int main()
{
    int n=2;
    
    int left=0;
    int right=2*n-1;
    vector <int> arr(2*n,0);
    int ans=0;
    solve(arr,left,right,ans,0,0);
    
    cout<<ans;
    return 0;
}



/*
Count even length binary sequences with same sum of first and second half bits


Given a number n, find count of all binary sequences of length 2n such that sum of first n bits is same as sum of last n bits.

Examples: 

Input:  n = 1
Output: 2
There are 2 sequences of length 2*n, the
sequences are 00 and 11

Input:  n = 2
Output: 6
There are 6 sequences of length 2*n, the
sequences are 0101, 0110, 1010, 1001, 0000
and 1111
*/