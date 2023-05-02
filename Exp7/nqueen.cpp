#include <bits/stdc++.h>
using namespace std;

void printBoard(int **board, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<board[i][j]<<" ";
        }
        cout<<'\n';
    }
}

int isSafe(int** board, int row, int col, int n)
{
    for(int i=0;i<col;i++)
    {
        if(board[row][i]==1) return false;
    }
    for(int i=row,j=col;i>=0 && j>=0;i--,j--)
    {
        if(board[i][j]) return false;
    }
    for(int i=row,j=col;i<n && j>=0;i++,j--)
    {
        if(board[i][j]) return false;
    }

    return true;
}

bool Nqueens(int** board,int col, int n)
{
    if (col >= n)
    {
        printBoard(board, n);
        return;
    }

    for(int row=0;row<n;row++)
    {
        if (isSafe(board,row,col,n)==1)
        {
            board[row][col] = 1;
        }
        Nqueens(board,col+1,n);
    }
    return ;
}

int main()
{
    cout << "Enter the number of rows/columns in the board: ";
    int n;
    cin >> n;
    int board[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            board[i][j] = 0;
        }
    }

    Nqueens(board, 0, n);

    return 0;
}