#include<iostream>
using namespace std;
int count = 0;

bool kya_queen_place_ho_sakti_hai(int board[][50], int i, int j, int n)
{
    // rows and columns
    for (int k = 0; k < n; k++)
    {
        if (board[k][j] == 1 || board[i][k]==1)
        {
            return false;
        }
    }
    
    int r = i, c = j;

    // right diagonal
    while (i>=0 && j<n)
    {
        if (board[i][j]==1)
        {
            return false;
        }
        i--;
        j++;
    }
    
    // left diagonal
    while (r>=0 && c>=0)
    {
        if (board[r][c]==1)
        {
            return false;
        }
        r--;
        c--;
    }
    
    return true;
}

bool nQueen(int board[][50], int i, int n)
{
    // base case
    if (i==n)
    {
        for (int k = 0; k < n; k++)
        {
            for (int l = 0; l < n; l++)
            {
                // cout<<board[k][l]<<" ";
                if (board[k][l]==1)
                {
                    cout<<"Q ";
                }
                else
                {
                    cout<<"- ";
                }
            }
            cout<<endl;
        }
        cout<<endl;
        count++;
        return false;    // pura board mil gya to true return kar diya
    }
    
    // recursive case
    for (int j = 0; j < n; j++)
    {
        if (kya_queen_place_ho_sakti_hai(board,i,j,n) == true)
        {
            board[i][j] = 1;    // means Q
            bool kya_baki_queens_place_ho_rhi_hai = nQueen(board, i+1, n);
            if (kya_baki_queens_place_ho_rhi_hai == true)
            {
                return true;
            }
            // this 
            // else
            // {
            //     board[i][j] = 0;
            // }
            // or this
            board[i][j] = 0;    // backtracking 
        }
    }
    return false;   // j is n 
}

int main()
{
    int board[50][50] = {0};
    int n;
    cin>>n;
    // mirroe image of the solution is a also a solution 
    nQueen(board, 0, n);
    cout<<count;
    return 0;
}