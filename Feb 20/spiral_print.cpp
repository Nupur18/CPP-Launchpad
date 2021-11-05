#include<iostream>
using namespace std;

void spiralprint(int arr[100][100], int rows, int cols)
{
    int sr = 0, er = rows-1;
    int sc = 0, ec = cols-1;
    while (sc<=ec && sr<=er)
    {
        for (int i = sc; i <= ec; i++)
        {
            cout<<arr[sr][i]<<" ";
        }
        sr++;
        for (int j = sr; j <= er; j++)
        {
            cout<<arr[j][ec]<<" ";
        }
        ec--;
        if (sr<er)
        {
            for (int i = ec; i >= sc; i--)
            {
                cout<<arr[er][i]<<" ";
            }
            er--;
        }
        if (sc<ec)
        {
            for (int j = er; j >= sr; j--)
            {
                cout<<arr[j][sc]<<" ";
            }
            sc++;
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
    
    // Printing 
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    //Spiral Print 
    spiralprint(a, row, col);
    return 0;
}