// vector is self growable array
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int arr[100];

    // syntax to declare vector
    // vector<datatype> vector_name  
    vector<int> v;  // initially size is 0

    v.push_back(1); // vector me 1 dal do
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    // naya array banne ke baad copy hota hai 

    // size <-- currently kitne elements hai
    // capacity <-- total kitne buckets hai 
    cout<<"Size of vector is "<<v.size()<<endl;
    cout<<"Capacity of vector is "<<v.capacity()<<endl;

    v.pop_back();   // jo bhi element last vala hai vo nikal jayega
    cout<<"Size of vector is "<<v.size()<<endl;
    cout<<"Capacity of vector is "<<v.capacity()<<endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;


    vector<int> v1(10);  // 10 buckets get created and initialised with 0
    v1.push_back(1);
    v1.push_back(2);
    for (int i = 0; i < v1.size(); i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    cout<<"Size of vector is "<<v1.size()<<endl;
    cout<<"Capacity of vector is "<<v1.capacity()<<endl;


    vector<int> v2(10); 
    for (int i = 0; i < 10; i++)
    {
        cin>>v2[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cout<<v2[i]<<" ";
    }
    cout<<endl;
    cout<<"Size of vector is "<<v2.size()<<endl;
    cout<<"Capacity of vector is "<<v2.capacity()<<endl;
    return 0;
}