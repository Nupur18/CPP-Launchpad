#include<iostream>
#include<queue>
using namespace std;
#define min_heap priority_queue<int, vector<int>, greater<int> > 

void print_heap(min_heap h)
{
    while (!h.empty())  // output will be in sorted order, this is heap sort
    {
        cout<<h.top()<<" ";
        h.pop();
    }
    cout<<endl;
}

int main()
{
    // priority_queue<int> h;  // by default -> max heap
    min_heap h;  // min heap
    int count = 0;
    int k = 3;  // min heap utne size ka hoga jitne top chahiye
    int n;
    while(1)    // infinite number of inputs
    {
        cin>>n;
        if (n == -1)
        {
            print_heap(h);
        }
        else
        {
            if (count < k)
            {
                h.push(n);
                count++;
            }
            else
            {
                if (h.top() < n)
                {
                    h.pop();
                    h.push(n);
                }
            }
        }
    }
    cout<<endl;
    return 0;
}