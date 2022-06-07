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
    void dfs_helper(T src, unordered_map<T,bool> &visited)
    {
        visited[src] = true;
        cout<<src<<" ";
        for(auto c : h[src])
        {
            if (!visited[c])
            {
                dfs_helper(c,visited);
            }
        }
    }
    public:
        void add_edge(T u, T v, bool bidirectional = true)
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

        // void dfs(T src, unordered_map<T,bool> &visited)
        // {
        //     visited[src] = true;
        //     cout<<src<<" ";
        //     for(auto c : h[src])
        //     {
        //         if (!visited[c])
        //         {
        //             dfs(c,visited);
        //         }
        //     }
        // }

        void dfs(T src)
        {
            int component = 1;
            unordered_map<T,bool> visited;
            dfs_helper(src,visited);
            cout<<endl;
            for(auto node : h)
            {
                if (!visited[node.first])
                {
                    dfs_helper(node.first, visited);
                    cout<<endl;
                    component++;
                }
                
            }
            cout<<"Total number of components are "<<component<<endl;
        }
};

int main()
{
    graph<int> G;
    int ne, nn;
    cin>>nn>>ne;
    for (int i = 0; i < ne; i++)
    {
        int u,v;
        cin>>u>>v;
        G.add_edge(u,v);
    }
    cout<<endl;
    G.print();
    cout<<endl;
    cout<<"Breadth First Search : ";
    G.bfs(0);
    cout<<endl;
    cout<<G.sssp(0,5)<<endl;    // minimum distance from 0 to 5

    // unordered_map<int, bool> visited;
    // G.dfs(0,visited);
    G.dfs(0);
    cout<<endl;

    graph<int> g;
    g.add_edge(0, 1);
	g.add_edge(0, 4);
	g.add_edge(2, 1);
	g.add_edge(2, 4);
	g.add_edge(3, 4);
	g.add_edge(3, 2);
	g.add_edge(3, 5);

	g.add_edge(11, 12);
	g.add_edge(13, 12);
	g.add_edge(14, 12);

	g.add_edge(114, 115);
	g.add_edge(114, 116);
	g.add_edge(114, 117);

	g.add_edge(1140, 1150);
    
    g.dfs(0);
    return 0;
}

// 6 7
// 1 0
// 0 4
// 4 2
// 2 1
// 2 3
// 3 4
// 3 5