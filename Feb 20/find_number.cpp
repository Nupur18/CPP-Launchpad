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
    int target;
    cin>>target;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            if (target == arr[i][j])
            {
                cout<<"Number is found at index "<<i<<" "<<j;
                // return 0;
                // or
                break;   //par break karne pe current loop se bahar aayega 
            }
        }
        if (j != cols)
        {
            break;
        }
    }
    if (i==rows)
    {
        cout<<"Number not found";
    }
    return 0;
}