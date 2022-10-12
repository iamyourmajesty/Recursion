#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    
    cout<<endl;
}
void solve(int arr[],int n,int s,int e)
{
    if(s>e)
    {
        print(arr,n);
        
        return;
    }
    
    
    arr[s]=0;
    arr[e]=0;
    
    
    solve(arr,n,s+1,e-1);
    
    arr[s]=0;
    arr[e]=1;
    
    solve(arr,n,s+1,e-1);
    
    arr[s]=1;
    arr[e]=0;
    
    solve(arr,n,s+1,e-1);
    
    arr[s]=1;
    arr[e]=1;
    solve(arr,n,s+1,e-1);
    
    
}
int main()
{
    int n=2;
    int s=0;
    int e = 2*n-1;
    
    // int arr[n];
    int *arr=new int[n];
    int N=2*n;
    solve(arr,N,s,e);
    
    return 0;
}


/* n = 2 then print bin seq of N=2*n
   or print bin seq if we have 4 bit memory

0 0 0 0 
0 0 1 0
0 1 0 0
0 1 1 0
0 0 0 1
0 0 1 1
0 1 0 1
0 1 1 1
1 0 0 0 
1 0 1 0
1 1 0 0
1 1 1 0
1 0 0 1
1 0 1 1
1 1 0 1
1 1 1 1


   order not matters at all you can  print 


*/