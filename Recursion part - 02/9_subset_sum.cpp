//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:

void solve(vector <int> &arr,int sum ,int i ,vector <int> &ans)
{
    if(i>=arr.size())
    {
        ans.push_back(sum);
        return;
    }
    
    //exclude
    solve(arr,sum,i+1,ans);
    
    //include
    sum += arr[i];
    solve(arr,sum,i+1,ans);
}
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
            
    vector <int> ans;
    solve(arr,0,0,ans);
    
    sort(ans.begin(),ans.end());
    
    return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends


// GEEKS FOR GEEKS
// https://practice.geeksforgeeks.org/problems/subset-sums2234/1?page=1&difficulty[]=-1&category[]=Recursion&category[]=Backtracking&sortBy=submissions