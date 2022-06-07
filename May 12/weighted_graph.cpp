#include<iostream>
#include<unordered_map>
#include<set>
#include<list>
#include<queue>
using namespace std;

template<typename T>

// generic graph
class graph
{
    unordered_map<T, list<pair<T,int> > > h;

    public:
        void add_edge(T src, T dest, int dist, bool bidirectional = true)
        {
            h[src].push_back(make_pair(dest,dist));
            if (bidirectional)
            {
                h[dest].push_back(make_pair(src,dist));
            }
        }

        void print()
        {
            for (auto node : h)
            {
                cout<<node.first<<" : ";
                for(auto neighbour : node.second)
                {
                    cout<<"("<<neighbour.first<<","<<neighbour.second<<") ";
                }
                cout<<endl;
            }
        }

        void dijkstra(T src, T dest)
        {
            unordered_map<T, int> distance;
            for(auto node : h)
            {
                distance[node.first] = INT_MAX;
            }
            distance[src] = 0;
            unordered_map<T,T> p;
            p[src] = src;
            set<pair<int,T> > s;    
            // set<pair<T,int> > s; would be wrong as set sorts data according to first argument
            // we want data to be sorted using minimum distance
            s.insert(make_pair(0,src));
            while(!s.empty())
            {
                auto node = *(s.begin());
                s.erase(s.begin());
                int parent_distance = node.first;
                T parent = node.second;
                for(auto children : h[parent])
                {
                    int edge_distance = children.second;
                    if(distance[children.first] > edge_distance + parent_distance)
                    {
                        auto f = s.find(make_pair(distance[children.first], children.first));   // returns address
                        if(f != s.end())
                        {
                            s.erase(f);
                        }
                        p[children.first] = parent;
                        distance[children.first] = edge_distance + parent_distance;
                        s.insert(make_pair(distance[children.first], children.first));
                    }
                }
            }
            for(auto node : distance)
            {
                cout<<"Minimum distance of "<<node.first<<" from source is "<<node.second<<endl;
            }
            cout<<endl;
            auto temp = dest;
            while (temp != src)
            {
                temp = p[temp];
            }
            cout<<"Distance of "<<dest<<" from "<<src<<" is "<<distance[dest]<<endl;

            while (dest != src)
            {
                cout<<dest<<" <- ";
                dest = p[dest];
            }
            cout<<dest<<endl;
        }
};

int main()
{
    graph<string> g;
    g.add_edge("Amritsar", "Agra", 1);
	g.add_edge("Amritsar", "Jaipur", 4);
	g.add_edge("Delhi", "Jaipur", 2);
	g.add_edge("Delhi", "Agra", 1);
	g.add_edge("Bhopal", "Agra", 2);
	g.add_edge("Bhopal", "Mumbai", 3);
	g.add_edge("Jaipur", "Mumbai", 8);
    g.print();
    cout<<endl;
    g.dijkstra("Amritsar", "Mumbai");
    return 0;
}