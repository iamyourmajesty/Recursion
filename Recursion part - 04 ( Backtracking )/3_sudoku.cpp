#include<bits/stdc++.h>
using namespace std;
void print(vector <vector <int> > &arr)
{
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        cout<<arr[i][j]<<" ";
        cout<<endl;
    }
}

bool is_safe(vector <vector <int> > &arr,int x,int y ,int value)
{
  
    
    for(int i=0;i<9;i++)
    {
        //for row
        if(arr[i][y]==value) return false;
        
        //for column
        if(arr[x][i]==value) return false;
        
        //for 3 x 3 matrix
        if(arr[(3*(x/3)) + i/3][(3*(y/3))  + i%3]==value) return false;
    }
    
    
    return  true; 
    
    
    
}

bool solve(vector <vector <int> > &arr)
{
    int n=arr.size();
    
    
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(arr[i][j]==0)
            {
                for(int value=0;value<=9;value++)
                {
                    if(is_safe(arr,i,j,value))
                    {
                        arr[i][j]=value;
                        if(solve(arr))
                        return true;
                        else
                        arr[i][j]=0;//backtrack
                        
                        
                    }
                }
                return false;
                
            }
        }
    }
    return true;

}
int main()
{
    std::vector<vector <int> > arr={ {3, 0, 6, 5, 0, 8, 4, 0, 0},
{5, 2, 0, 0, 0, 0, 0, 0, 0},
{0, 8, 7, 0, 0, 0, 0, 3, 1},
{0, 0, 3, 0, 1, 0, 0, 8, 0},
{9, 0, 0, 8, 6, 3, 0, 0, 5},
{0, 5, 0, 0, 9, 0, 6, 0, 0}, 
{1, 3, 0, 0, 0, 0, 2, 5, 0},
{0, 0, 0, 0, 0, 0, 0, 7, 4},
{0, 0, 5, 2, 0, 6, 3, 0, 0} };

solve(arr);

print(arr);

    return 0;
}