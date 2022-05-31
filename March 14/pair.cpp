#include<iostream>
using namespace std;

class Pair
{
    public:
        int a;
        int b;
        
        // constructor
        Pair(int a, int b)
        {
            this -> a = a;
            this -> b = b;
        }

        bool operator < (Pair &y)
        {
            if ( (a < y.a) && (b < y.b) )
            {
                return true;
            }
            else
            {
                return false;
            }
        } 
};

int main()
{
    Pair x(20, 40);
    Pair y(15, 30);
    if (x<y)
    {
        cout<<"x is less than y"<<endl;
    }
    else
    {
        cout<<"x is greater than y"<<endl;
    }
    return 0;
}