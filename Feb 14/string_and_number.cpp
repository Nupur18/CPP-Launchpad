#include<iostream>
using namespace std;
int main()
{
    char arr[100];
    int n;
    cin>>n;
    cin.ignore(); // ignores 1 character ... yha isliye likha taki number ke baad ka character ignore ho jaye 
    cin.getline(arr, 100);
    cout<<n<<endl;
    cout<<arr<<endl;

    // or 
    // char arr[100];
    // char ch;
    // int n;
    // cin>>n;
    // ch = cin.get();
    // cin.getline(arr, 100);
    // cout<<n<<endl;
    // cout<<arr<<endl;
    return 0;
}