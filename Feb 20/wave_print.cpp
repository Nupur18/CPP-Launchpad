#include<iostream>
using namespace std;
int main()
{
    int arr[100][100], i, j;
    int rows, cols; 
    cin>>rows>>cols;
    // Taking input
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            cin>>arr[i][j];
        }
    }
    
    // Printing 
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //Wave Print 
    for (i = 0; i < cols; i++)
    {
        if (i%2 == 0)
        {
            // means even 
            for (j = 0; j < rows; j++)
            {
                cout<<arr[j][i]<<" ";
            }
        }
        else
        {
            // means odd 
            for (j = rows-1; j >= 0; j--)
            {
                cout<<arr[j][i]<<" ";
            }
        }   
    }
    return 0;
}