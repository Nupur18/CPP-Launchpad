#include<iostream>
#include<list>  // cpp reference list
using namespace std;
int main()
{
    list<int> l;    // linked list
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);
    // to iterate on vector or list we use for each loop
    for(auto node: l)
    {
        cout<<node<<" ";
    }
    cout<<endl;
    return 0;
}