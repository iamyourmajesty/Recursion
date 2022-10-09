#include<bits/stdc++.h>
using namespace std;
bool bin_search(int arr[],int n,int target,int s,int e)
{
    if(s>e) return false;

    int mid = s + (e-s)/2;

    if(arr[mid]==target) return true;
    else if(target>arr[mid]) s = mid + 1;
    else e = mid - 1;

   return  bin_search(arr,n,target,s,e);
}
int main()
{
    int arr[]={12,16,31,34,45,67,84,135};
    int n=sizeof(arr)/sizeof(int);
    int target=66;

    if(bin_search(arr,n,target,0,n-1))
    cout<<"found";
    else
    cout<<"not found";
    return 0;
}