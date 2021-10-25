#include<iostream>
using namespace std;
int main()
{
    // initialisation 
    // char arr[] = {'A', 'B', 'C', 'D', '\0'};      
    // char arr1[] = {'A', 'B', 'C', 'D', '\0'};      
    // cout<<arr<<endl; // value
    // cout<<arr1<<endl;

    // char arr2[] = "abcd";   // contains by default the null at the end 
    // cout<<arr2<<endl;
    
    // int a[] = {1,2,3};      // a is internal pointer and will give you address
    // cout<<a<<endl;

    // char arr3[100];    // if values nhi de rhe then we have to specify size 
    // cin>>arr3;
    // cout<<arr3<<endl;

    char arr4[100];
    char ch;
    ch = cin.get(); // takes 1 value at a time and returns it
    int i = 0;
    while (ch!='\n')
    {
        arr4[i] = ch;
        i++;
        ch = cin.get();
    }
    cout<<arr4<<endl;

    // inbuilt function to perform the above task
    char arr5[100];
    cin.getline(arr5, 100); // to take a paragraph as an input 
    cout<<arr5<<endl;

    // we can also print like this
    for (int i = 0; arr5[i]='\0'; i++)
    {
        cout<<arr5[i];
    }
    cout<<endl;

    // char arr6[8] = "codingbl"; // idhar error aa jayega because end me \0 bhi aayega 
    // cout<<arr6<<endl;

    char arr6[100];
    char ch;
    ch = cin.get(); // takes 1 value at a time and returns it
    int i = 0;
    while (ch!='$') // here $ is delimiter 
    {
        arr6[i] = ch;
        i++;
        ch = cin.get();
    }
    cout<<arr6<<endl;

    char arr7[100];
    cin.getline(arr7, 100, '?'); // isme enter ko bhi padhega 
    cout<<arr7<<endl;

    return 0;
}