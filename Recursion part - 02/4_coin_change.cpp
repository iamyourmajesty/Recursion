#include<bits/stdc++.h>
using namespace std;
int tot_ways(int coins[],int n,int amount,int current)
{
    //base case
    if(amount==0) return 1;
    else if(amount<0) return 0;

    int ways=0;
    for(int i=current;i<n;i++)
    {
        ways += tot_ways(coins,n,amount - coins[i],i);
    }
    return ways;
}
int main()
{
    int coins[]={1,2};
    int n=2;
    int amount=4;
    cout<<tot_ways(coins,n,amount,0);
    return 0;
}

// https://practice.geeksforgeeks.org/problems/coin-change2448/1