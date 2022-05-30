#include<bits/stdc++.h>
using namespace std;
bool lin_search(int arr[],int n,int key)
{
    if (n==0) return false;
    if(arr[n-1]==key) return true;

    return lin_search(arr,n-1,key);
}
int main()
{
    int arr[]={45,6,7,34,98};
    int n=5;
    int key=45;
    cout<<lin_search(arr,n,key);
    return 0;
}