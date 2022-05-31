#include<iostream>
using namespace std;

int main()
{
    int **arr = NULL;
    int rows, cols;
    cin>>rows>>cols;
    arr = new int*[rows];
    for (int i = 0; i < rows; i++)
    {
        // *(arr + i) 
        arr[i] = new int[cols];
    }

    // Taking input
    int number = 1;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; i < cols; j++)
        {
            // cin>>arr[i][j];
            arr[i][j] = number;
            number++;
        }
    }    
    
    // Printing array
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; i < cols; j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }  

    // Deleting array
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; i < cols; j++)
        {
            delete []arr[i];
        }
    } 
    delete []arr; 
    arr = NULL;

    return 0;

}