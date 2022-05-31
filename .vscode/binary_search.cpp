#include<bits/stdc++.h>
using namespace std;
int bin_search(int arr[],int s,int e,int target)
{
    int mid= s+ (e-s)/2;

    if(arr[mid]==target) return mid;
    else if(target>arr[mid]) s = mid +1;
    else e=mid-1;

    return bin_search(arr,s,e,target);

}
int main()
{
    int arr[]={12,15,23,45,67,89};
    int n=6;
    int target=15;
    int s=0,e=n-1;
    cout<<"Index of "<<target<<" is "<<bin_search(arr,s,e,target);
    return 0;
}