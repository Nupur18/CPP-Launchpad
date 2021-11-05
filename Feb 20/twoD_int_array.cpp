#include<iostream>
using namespace std;
int main()
{
    // First way
    // int arr[3][3] = {
    //     {1,2,3},
    //     {4,5,6},
    //     {7,8,9}
    // };

    // Second way 
    // you can skip number of rows but not number of columns 
    // int arr[][3] = {
    //     {1,2,3},
    //     {4,5,6},
    //     {7,8,9}
    // };  

    // Third way 
    // last cell me 0 aa jayega, agar kuch ko initiaise karo kuch value se aur bakio ko na karo to unme 0 aa jayega
    // int arr[][3] = {
    //     {1,2,3},
    //     {4,5,6},
    //     {7,8}
    // }; 

    // for (int row = 0; row < 3; row++)
    // {
    //     for (int col = 0; col < 3; col++)
    //     {
    //         cout<<arr[row][col]<<" ";
    //     }
    //     cout<<endl;
    // }

    int arr[100][100];
    int rows, cols; 
    cin>>rows>>cols;
    // Taking input
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin>>arr[i][j];
        }
    }
    // Printing
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}