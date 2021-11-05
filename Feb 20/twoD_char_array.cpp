#include<iostream>
using namespace std;
int main()
{
    char arr[][4] = {
        {'A', 'B', 'C', '\0'},
        {'D', 'E', 'F', '\0'},
        {'G', 'H', 'I', '\0'},
    };
    char a[][4] = {"abc", "def", "ghi"}; // yha pe string hai to automatically null aa jayega
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;

    return 0;
}