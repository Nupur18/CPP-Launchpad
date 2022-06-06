#include<iostream>
#include<unordered_map>     // for hash map
using namespace std;
int main()
{
    // syntax --> unordered_map<key,value> h;
    unordered_map<string,int> h;

    // 1st way to insert
    h["apple"] = 100;
    h["banana"] = 150;

    // 2nd way to insert  -->  h.insert({key,value})
    // h.insert({"papaya",160});

    // 3rd way to insert
    pair<string,int>p("mango",80);
    h.insert(p);

    // 4th way to insert
    h.insert(make_pair("grapes",500));

    // print the hash map
    for(pair<string,int> fruit:h)     // for each pair of fruit in the hashmap h
    {
        cout<<fruit.first<<" ---> "<<fruit.second<<endl; 
    }
    cout<<endl;

    for(auto fruit:h)     
    {
        cout<<fruit.first<<" ---> "<<fruit.second<<endl; 
    }
    cout<<endl;

    for(auto it = h.begin(); it!=h.end(); it++)      // it is pointer     
    {
        cout<<it->first<<" ---> "<<it->second<<endl; 
    }
    cout<<endl;

    h.erase("mango");
    for(auto fruit : h)     
    {
        cout<<fruit.first<<" ---> "<<fruit.second<<endl; 
    }
    cout<<endl;
    return 0;
}