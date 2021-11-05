#include<iostream>
using namespace std;

void transpose(int arr[100][100], int rows, int cols) // function me array lete samay column size specify karna padega
// it can be like void transpose(int arr[][100]) but not void transpose(int arr[][])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i<j)
            {
                swap(arr[i][j], arr[j][i]);
            }
        }
    }
}

int main()
{
    int a[100][100], i, j;
    int row, col; 
    cin>>row>>col;
    // Taking input
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cin>>a[i][j];
        }
    }
    
    // Original Matrix
    cout<<"Matrix is :-"<<endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    // Transpose 
    transpose(a, row, col);

    cout<<"Transpose is :-"<<endl;
    for (i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}