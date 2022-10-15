 #include<bits/stdc++.h>
 using namespace  std;

   void solve(vector <int> &arr,int key)
{
    if(arr.size()==1) return; //base case

    int n  = arr.size();
    int temp= key%n;
    if(key%n==0) temp= n; ////smilee
    


    vector <int> vec;
    for(int i=temp;i<n;i++)
    vec.push_back(arr[i]);

   int j=0;
    while (j<temp-1)
    {
        vec.push_back(arr[j]);
        j++;
    }
    
    arr=vec;
    
    solve(arr,key);
}




    int findTheWinner(int n, int k) {


        
        vector <int> arr;

    for(int i=1;i<=n;i++)
    arr.push_back(i);

    solve(arr,k);

    return arr[0];

    }

int main()
{
    int n=5;
    int key=4;

    
    cout<<findTheWinner(n,key);

    
    return 0;
}


// test case 1  n= 5 and key=2         op-3
//test case 2 n=6 and key=5             op-1
//test case 3 n=5 and key=4            op -1 


// dry run is key to sucess 
// https://leetcode.com/problems/find-the-winner-of-the-circular-game/description/