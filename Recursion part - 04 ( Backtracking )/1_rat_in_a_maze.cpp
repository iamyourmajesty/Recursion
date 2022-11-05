#include<bits/stdc++.h>
using namespace std;
bool is_safe(vector <vector <int> > &maze,vector <vector <int> > &visted,int n,int x,int y)
{
    //point must be inside maze  
    //maze[x][y]== 1
    //visted[x][y] != 1
    if(x>=0 and y>=0 and x<n and y<n and maze[x][y]==1 and visted[x][y]!=1)
    return true;
    
    return false;
    
}
void solve(vector <vector <int> > &maze,vector <vector <int> > &visted,int n,int x,int y,string str)
{
    if(x==n-1 and y==n-1)
    {
        cout<<str<<endl;
        return;
    }
    
    //Down
    if(is_safe(maze,visted,n,x+1,y))
    {
        str += "D";
        visted[x+1][y]=1;
        solve(maze,visted,n,x+1,y,str);
        visted[x+1][y]=0;
        str.pop_back();
    }
    
    //Left
    if(is_safe(maze,visted,n,x,y-1))
    {
        str += "L";
        visted[x][y-1]=1;
        solve(maze,visted,n,x,y-1,str);
        visted[x][y-1]=0;
        str.pop_back();
    }
    
    //Right
    if(is_safe(maze,visted,n,x,y+1))
    {
        str += "R";
        visted[x][y+1]=1;
        solve(maze,visted,n,x,y+1,str);
        visted[x][y+1]=0;
        str.pop_back();
    }
    
     //Up
    if(is_safe(maze,visted,n,x-1,y))
    {
        str += "U";
        visted[x-1][y]=1;
        solve(maze,visted,n,x-1,y,str);
        visted[x-1][y]=0;
        str.pop_back();
    }
    
    
}

int main()
{
    int n=4;
    std::vector< vector <int> > maze={ {1,0,0,0},{1,1,0,0},{1,1,0,0},{0,1,1,1} } ;
    
    vector <vector <int> > visted(n,vector <int> (n,0));
    visted[0][0]=1;
    
    
    // cout<<is_safe(maze,visted,n,1,0);
    solve(maze,visted,n,0,0,"");
    
    
    return 0;
}

// https://practice.geeksforgeeks.org/problems/rat-in-a-maze-problem/1
/*
Consider a rat placed at (0, 0) in a square matrix of order N * N. It has to reach the destination at (N - 1, N - 1). Find all possible paths that the rat can take to reach from source to destination. The directions in which the rat can move are 'U'(up), 'D'(down), 'L' (left), 'R' (right). Value 0 at a cell in the matrix represents that it is blocked and rat cannot move to it while value 1 at a cell in the matrix represents that rat can be travel through it.
Note: In a path, no cell can be visited more than one time. If the source cell is 0, the rat cannot move to any other cell.

Example 1:

Input:
N = 4
m[][] = {{1, 0, 0, 0},
         {1, 1, 0, 1}, 
         {1, 1, 0, 0},
         {0, 1, 1, 1}}
Output:
DDRDRR DRDDRR
Explanation:
The rat can reach the destination at 
(3, 3) from (0, 0) by two paths - DRDDRR 
and DDRDRR, when printed in sorted order 
we get DDRDRR DRDDRR.
Example 2:
Input:
N = 2
m[][] = {{1, 0},
         {1, 0}}
Output:
-1
Explanation:
No path exists and destination cell is 
blocked.
Your Task:  
You don't need to read input or print anything. Complete the function printPath() which takes N and 2D array m[ ][ ] as input parameters and returns the list of paths in lexicographically increasing order. 
Note: In case of no path, return an empty list. The driver will output "-1" automatically.

Expected Time Complexity: O((3N^2)).
Expected Auxiliary Space: O(L * X), L = length of the path, X = number of paths.

Constraints:
2 ≤ N ≤ 5
0 ≤ m[i][j] ≤ 1

*/