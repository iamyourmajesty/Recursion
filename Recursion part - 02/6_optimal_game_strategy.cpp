#include<bits/stdc++.h>
using namespace std;
int solve(int arr[],int n,int s,int e)
{
    if(s>e) return 0;
                 //player 1                                    player 2 kaya dega
    int ch1  =    arr[s]          +                min(solve(arr,n,s+2,e),solve(arr,n,s+1,e-1));
    int ch2  =    arr[e]          +                min(solve(arr,n,s+1,e-1),solve(arr,n,s,e-2));

   
    return max(ch1,ch2);
}
int main()
{
    int arr[]={5,3,7,10};
    int n= sizeof(arr)/sizeof(int);

    cout<<solve(arr,n,0,n-1);
    return 0;
}


// https://practice.geeksforgeeks.org/problems/optimal-strategy-for-a-game-1587115620/1