#include<bits/stdc++.h>
using namespace std;
int max_in_array(int arr[],int n)
{
    static int maxi = arr[0];

    if(n==1) return maxi;

    if(arr[n-1]>maxi)
    maxi=arr[n-1];

    return max_in_array(arr,n-1);
}
int main()
{
    int arr[]={3,6,87,2,34,43};
    int n=6;
    cout<<max_in_array(arr,n);
    return 0;
}