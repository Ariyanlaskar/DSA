#include <bits/stdc++.h>
using namespace std;
int shortestPathLength(vector<vector<int>> &graph)
{
    queue<pair<int, int>> q; // queue< {node, nodesVisited} >
    set<pair<int, int>> s;   // // set< {node, nodesVisited} >
    int n = graph.size(), allNodes = ((1 << n) - 1), temp, pathLen = 0;

    for (int i = 0; i < n; i++)
        q.push({i, (1 << i)});

    while (q.empty() == false)
    {

        temp = q.size();
        while (temp)
        {

            auto p = q.front();
            q.pop();

            for (auto connectedNode : graph[p.first])
            {

                int mask = (1 << connectedNode);                                       // Making mask to block other bits accept connected node bit //
                int nodesVisited = (p.second & mask) ? (p.second) : (p.second + mask); // If the current node is not visited then add it to the path //

                if (nodesVisited == allNodes)
                    return (pathLen + 1);

                if (s.count({connectedNode, nodesVisited}) == 0)
                {
                    q.push({connectedNode, nodesVisited});
                    s.insert({connectedNode, nodesVisited});
                }
            }

            temp -= 1;
        }

        pathLen += 1;
    }
    return 0;
}
// Input: graph = [[1,2,3],[0],[0],[0]]
// Output: 4