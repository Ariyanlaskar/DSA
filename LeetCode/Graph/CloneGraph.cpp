#include <bits/stdc++.h>
using namespace std;
unordered_map<Node *, Node *> mp;
Node *cloneGraph(Node *node)
{
    return dfs(node);
}
Node *dfs(Node *node)
{
    if (node == NULL)
    {
        return NULL;
    }
    if (mp.find(node) != mp.end())
    {
        return mp[node];
    }
    Node *clone = new Node(node->val);
    mp[node] = clone;
    for (auto n : node->neighbors)
    {
        clone->neighbors.push_back(dfs(n));
    }
    return clone;
}
// Input: adjList = [[2,4],[1,3],[2,4],[1,3]]
// Output: [[2,4],[1,3],[2,4],[1,3]]