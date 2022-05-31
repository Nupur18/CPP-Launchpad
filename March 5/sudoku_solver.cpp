#include<iostream>
#include<cmath>
using namespace std;

bool kya_mai_number_rakh_sakti_hu(int mat[][9], int i, int j, int number, int n)    // column, row and box check karenge
{
    // rows and columns 
    for (int k = 0; k < n; k++)
    {
        if (mat[k][j] == number || mat[i][k] == number)
        {
            return false;
        }
    }

    // small box 
    n = sqrt(n);    // n <-- 3
    int start_i = (i/n)*n;
    int start_j = (j/n)*n;
    for (int i = start_i; i < start_i+n; i++)
    {
        for (int j = start_j; j < start_j+n; j++)
        {
            if (mat[i][j] == number)
            {
                return false;
            }
        }
    }
    
    return true;
}

bool sudoku_solver(int mat[][9], int i, int j, int n)
{
    // base case
    if (i==n)
    {
        for (int k = 0; k < n; k++)
        {
            for (int l = 0; l < n; l++)
            {
                cout<<mat[k][l]<<" ";
            }
            cout<<endl;
        }
        return true;
    }
    if (j==n)
    {
        // this 
        // bool chotaAnswer = sudoku_solver(mat, i+1, 0, n);
        // return chotaAnswer;
        // or this
        return sudoku_solver(mat, i+1, 0, n);
    }
    if (mat[i][j] != 0)
    {
        return sudoku_solver(mat, i, j+1, n);
    }
    
    // recursive case 
    for (int number = 1; number <= n; number++)
    {
        if (kya_mai_number_rakh_sakti_hu(mat, i, j, number, n) == true)
        {
            mat[i][j] = number;
            bool kya_baki_se_answer_mila = sudoku_solver(mat, i, j+1, n);
            if (kya_baki_se_answer_mila == true)    // baki pure ke liye ye number sahi hai & baki matrix ke liye ans mil rha hai
            {
                return true;
            }
            mat[i][j] = 0;  // backtracking
        }
    }
    return false;
}

int main()
{
    int mat[9][9] = {
    {5, 3, 0, 0, 7, 0, 0, 0, 0},    // 0 denotes empty
    {6, 0, 0, 1, 9, 5, 0, 0, 0}, 
    {0, 9, 8, 0, 0, 0, 0, 6, 0}, 
    {8, 0, 0, 0, 6, 0, 0, 0, 3}, 
    {4, 0, 0, 8, 0, 3, 0, 0, 1}, 
    {7, 0, 0, 0, 2, 0, 0, 0, 6}, 
    {0, 6, 0, 0, 0, 0, 2, 8, 0}, 
    {0, 0, 0, 4, 1, 9, 0, 0, 5}, 
    {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };
    int n = 9;
    bool ans = sudoku_solver(mat, 0, 0, n);    // we have to check if sudoku solve ho rha hai ya nhi
    if (ans == false)
    {
        cout<<"Invalid Sudoku";
    }
    
    return 0;
}









// {5, 3, 0, 0, 7, 0, 0, 0, 0},
// {6, 0, 0, 1, 9, 5, 0, 0, 0}, 
// {0, 9, 8, 0, 0, 0, 0, 6, 0}, 
// {8, 0, 0, 0, 6, 0, 0, 0, 3}, 
// {4, 0, 0, 8, 0, 3, 0, 0, 1}, 
// {7, 0, 0, 0, 2, 0, 0, 0, 6}, 
// {0, 6, 0, 0, 0, 0, 2, 8, 0}, 
// {0, 0, 0, 4, 1, 9, 0, 0, 5}, 
// {0, 0, 0, 0, 8, 0, 0, 7, 9} 