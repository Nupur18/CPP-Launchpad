#include<iostream>
using namespace std;

class Vector
{
    public:
        int *arr;
        int ms;     // maximum size
        int cs;     // current size 

        Vector(int s = 2) // default argument
        // initially jo array ban rhi hai vo 2 se start ho rhi hai, if int s = 2 nhi likha to vector 1 size se start hoga, ms = 0
        {
            ms = s;
            cs = 0;
            arr = new int [ms];
        }

        void push_back(int data)
        {
            if (cs==ms)
            {
                int *oldarr = arr;  // oldarr isliye banaya taki purani array ko access kar sake uske elements copy karne ke liye
                int oldms = ms;
                arr = new int [2*ms];
                ms *= 2;
                // purani array ke elements ko nyi array me copy kia
                for (int i = 0; i < oldms; i++)
                {
                    arr[i] = oldarr[i];
                }
                delete[] oldarr;
            }
            
            arr[cs] = data;
            cs++;
        }

        void pop_back()
        {
            if (cs>0)
            {
                cs--;
            }
            
        }

        int size()
        {
            return cs;
        }

        int capacity()
        {
            return ms;
        }

        int operator[] (int i)
        {
            return arr[i];
        }
};

int main()
{
    Vector v;
    v.push_back(1);
    v.push_back(4);
    v.push_back(2);
    v.push_back(5);
    v.push_back(7);
    v.push_back(1);
    v.push_back(4);
    v.push_back(2);
    v.push_back(5);
    v.push_back(7);

    cout<<"Size of vector is "<<v.size()<<endl;
    cout<<"Capacity of vector is "<<v.capacity()<<endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    v.pop_back();
    cout<<"Size of vector is "<<v.size()<<endl;
    cout<<"Capacity of vector is "<<v.capacity()<<endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
    return 0;
}
// current size <-- array kitna bhara hua hai, usme kitne elements hai
// maximum size <-- array ka size 