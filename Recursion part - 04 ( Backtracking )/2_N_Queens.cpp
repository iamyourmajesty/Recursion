#include<bits/stdc++.h>
using namespace std;
void print(vector <vector <int> > &board)
{
    for(int i=0;i<board.size();i++)
    {
        for(int j=0;j<board.size();j++)
        cout<<board[i][j]<<" ";
        
        cout<<endl;
    }
    
    cout<<endl<<endl;
}
bool is_safe(vector <vector <int> > &board,int n,int row,int col)
{
    int r=row;
    int c=col;
    while(c>=0)
    {
        if(board[r][c])
        return false;
        
        c--;
    }
    
    r=row;
    c=col;
    
    while(r>=0 and c>=0)
    {
        if(board[r][c])
        return false;
        
        r--;
        c--;
    }
    
    r=row;
    c=col;
    
    while(r<n and c>=0)
    {
        if(board[r][c])
        return false;
        
        r++;
        c--;
    }
    
    
    return true;
}

void solve(vector <vector <int> > &board,int n,int col)
{
    if(col>=n)
    {
        print(board);
        return;
    }
    
    for(int i=0;i<n;i++)
    {
        // i say rows ko handel karengay
        if(is_safe(board,n,i,col))
        {
            board[i][col]=1;
            solve(board,n,col+1);
            board[i][col]=0;
        }
        
    }
}
int main()
{
    int n=4;
    std::vector<vector <int> > board(n,vector <int> (n,0)); // n x n ka board
    
    solve(board,n,0);
    return 0;
}

// https://www.codingninjas.com/codestudio/problems/n-queens_759332
