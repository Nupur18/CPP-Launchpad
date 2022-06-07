#include<iostream>
#include<list>
using namespace std;

class graph
{
    public:
        list<int> *l;   // pointer address of array -> list
        int n;

        // constructor
        graph(int N)
        {
            n = N;
            l = new list<int> [N];
        }

        void add_edge(int u, int v, bool bidirectional = true)
        {
            l[u].push_back(v);
            if (bidirectional)
            {
                l[v].push_back(u);
            }
        }

        void print()
        {
            for (int i = 0; i < n; i++)
            {
                cout<<i<<" -> ";
                for (auto node: l[i])
                {
                    cout<<node<<" ";
                }
                cout<<endl;
            }
        }
};

int main()
{
    int ne, nn;
    cin>>nn>>ne;
    graph g(nn);
    for (int i = 0; i < ne; i++)
    {
        int u,v;
        cin>>u>>v;
        g.add_edge(u,v);
    }
    cout<<endl;
    g.print();
    return 0;
}