#include<iostream>
#include<unordered_map>
#include<list>
#include<queue>
using namespace std;

#define pb push_back
template<typename T>

// generic graph
class graph
{
    // unordered_map<string, list<string> > h;
    // or 
    unordered_map<T, list<T> > h;
    public:
        void add_edge(T u, T v, bool bidirectional = false)
        {
            h[u].pb(v);
            if (bidirectional)
            {
                h[v].pb(u);
            }
        }

        void print()
        {
            for(auto node : h)
            {
                // node --> key and value
                cout<<node.first<<" : ";
                for(auto neighbour : node.second)
                {
                    cout<<neighbour<<" ";
                }
                cout<<endl;
            }
        }

        void bfs(T start)
        {
            queue<T> q;
            unordered_map<T, bool> visited;
            q.push(start);
            visited[start] = true;
            unordered_map<T, int> distance;
            distance[start] = 0;
            while (!q.empty())
            {
                T node = q.front();
                q.pop();
                cout<<node<<" ";
                for(auto children : h[node])
                {
                    if (!visited[children])
                    {
                        q.push(children);
                        visited[children] = true;
                        distance[children] = distance[node] + 1;
                    }
                }
            }
            cout<<endl;
            for(auto temp : distance)
            {
                cout<<"Minimum distance of "<<temp.first<<" from 0 is "<<temp.second<<endl;
            }
        }

        int sssp(T start, T destination)  // single source shortest path
        {
            queue<T> q;
            unordered_map<T, bool> visited;
            q.push(start);
            visited[start] = true;
            unordered_map<T, int> distance;
            distance[start] = 0;
            unordered_map<T, T> parent;
            parent[start] = start;
            while (!q.empty())
            {
                T node = q.front();
                q.pop();
                for(auto children : h[node])
                {
                    if (!visited[children])
                    {
                        q.push(children);
                        visited[children] = true;
                        distance[children] = distance[node] + 1;
                        parent[children] = node;
                    }
                }
            }
            T temp = destination;
            while (temp != parent[temp])    // while (temp != start)
            {
                cout<<temp<<" <- ";
                temp = parent[temp];
            }
            cout<<temp<<endl;
            return distance[destination];
        }
};

int main()
{
    graph<string> g;
    g.add_edge("Putin", "Trump");
    g.add_edge("Putin", "Modi");
    g.add_edge("Putin", "Pope");
    g.add_edge("Modi", "Trump", true);
    g.add_edge("Modi", "Yogi", true);
    g.add_edge("Yogi", "Prabhu");
    g.add_edge("Prabhu", "Modi");
    g.print();

    graph<int> G;
    int ne, nn;
    cin>>nn>>ne;
    for (int i = 0; i < ne; i++)
    {
        int u,v;
        cin>>u>>v;
        G.add_edge(u,v, true);
    }
    cout<<endl;
    G.print();
    cout<<"Breadth First Search : ";
    G.bfs(0);
    cout<<G.sssp(0,5)<<endl;    // minimum distance from 0 to 5

    graph<int> b;
    int board[50] = {0};
    board[2] = 13;
    board[5] = 2;
    board[9] = 18;
    board[18] = 11;
    board[17] = -13;
    board[20] = -14;
    board[24] = -8;
    board[25] = -10;
    board[32] = -2;
    board[34] = -22;
    for (int u = 0; u < 36; u++)
    {
        for (int dice = 1; dice <= 6; dice++)
        {
            int v = u + dice + board[u+dice];
            b.add_edge(u,v);
        }
    }
    cout<<b.sssp(0,36)<<endl;
    return 0;
}
// both key and value are string
	// g.addEdge("Putin", "Trump");
	// g.addEdge("Putin", "Modi");
	// g.addEdge("Putin", "Pope");
	// g.addEdge("Modi", "Trump", true);
	// g.addEdge("Modi", "Yogi", true);
	// g.addEdge("Yogi", "Prabhu");
	// g.addEdge("Prabhu", "Modi");
// 6 7
// 1 0
// 0 4
// 4 2
// 2 1
// 2 3
// 3 4
// 3 5

// 	int board[50] = {0};
// 	board[2] = 13;
// 	board[5] = 2;
// 	board[9] = 18;
// 	board[18] = 11;
// 	board[17] = -13;
// 	board[20] = -14;
// 	board[24] = -8;
// 	board[25] = -10;
// 	board[32] = -2;
// 	board[34] = -22;