---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"graph_theory\\\\simple_graph.hpp\"\n/*\r\n * Author: hemis,\
    \ Kalpesh Patel\r\n * Description: Simple graph struct for dfs and bfs.\r\n*/\r\
    \n\r\nstruct graph {\r\n\r\n    struct edges {\r\n        int to = -1;\r\n   \
    \     edges(int _to) : to(_to) {};\r\n    };\r\n\r\n    int n;\r\n    vector<vector<edges>>\
    \ adj;\r\n    vector<int> dist;\r\n    vector<bool> visited;\r\n    vector<int>\
    \ prev;\r\n\r\n    graph(int _n) {\r\n        int n = _n;\r\n        dist.resize(n,\
    \ INT_MAX);\r\n        adj.resize(n);\r\n        visited.resize(n);\r\n      \
    \  prev.resize(n, -1);\r\n    }\r\n\r\n    void add_directional_edge(int from,\
    \ int to) {\r\n        adj[from].push_back(to);\r\n    }\r\n\r\n    void add_bidirectional_edge(int\
    \ a, int b) {\r\n        add_directional_edge(a, b);\r\n        add_directional_edge(b,\
    \ a);\r\n    }\r\n\r\n    void dfs(int u) {\r\n        visited[s] = true;\r\n\
    \        for (auto e : adj[s]) {\r\n            int v = e.to;\r\n            if\
    \ (!visited[v]) {\r\n                dfs(v);\r\n            }\r\n        }\r\n\
    \    }\r\n\r\n    void bfs(int source) {\r\n        queue<int> q;\r\n        q.push(source);\r\
    \n        dist[source] = 0;\r\n        visited[source] = true;\r\n        while\
    \ (!q.empty()) {\r\n            int u = q.front(); q.pop();\r\n            for\
    \ (auto& e : adj[u]) {\r\n                int to = e.to;\r\n                if\
    \ (visited[to]) continue;\r\n                visited[to] = true;\r\n         \
    \       dist[to] = dist[u] + 1;\r\n                prev[to] = u;\r\n         \
    \       q.push(to);\r\n            }\r\n        }\r\n    }\r\n\r\n    vector<int>\
    \ restore_path(int s, int t) {\r\n        vector<int> path = {t};\r\n        while\
    \ (t != s) {\r\n            t = prev[t];\r\n            path.push_back(t);\r\n\
    \        }\r\n        reverse(path.begin(), path.end());\r\n        return path;\r\
    \n    }\r\n};\r\n"
  code: "/*\r\n * Author: hemis, Kalpesh Patel\r\n * Description: Simple graph struct\
    \ for dfs and bfs.\r\n*/\r\n\r\nstruct graph {\r\n\r\n    struct edges {\r\n \
    \       int to = -1;\r\n        edges(int _to) : to(_to) {};\r\n    };\r\n\r\n\
    \    int n;\r\n    vector<vector<edges>> adj;\r\n    vector<int> dist;\r\n   \
    \ vector<bool> visited;\r\n    vector<int> prev;\r\n\r\n    graph(int _n) {\r\n\
    \        int n = _n;\r\n        dist.resize(n, INT_MAX);\r\n        adj.resize(n);\r\
    \n        visited.resize(n);\r\n        prev.resize(n, -1);\r\n    }\r\n\r\n \
    \   void add_directional_edge(int from, int to) {\r\n        adj[from].push_back(to);\r\
    \n    }\r\n\r\n    void add_bidirectional_edge(int a, int b) {\r\n        add_directional_edge(a,\
    \ b);\r\n        add_directional_edge(b, a);\r\n    }\r\n\r\n    void dfs(int\
    \ u) {\r\n        visited[s] = true;\r\n        for (auto e : adj[s]) {\r\n  \
    \          int v = e.to;\r\n            if (!visited[v]) {\r\n               \
    \ dfs(v);\r\n            }\r\n        }\r\n    }\r\n\r\n    void bfs(int source)\
    \ {\r\n        queue<int> q;\r\n        q.push(source);\r\n        dist[source]\
    \ = 0;\r\n        visited[source] = true;\r\n        while (!q.empty()) {\r\n\
    \            int u = q.front(); q.pop();\r\n            for (auto& e : adj[u])\
    \ {\r\n                int to = e.to;\r\n                if (visited[to]) continue;\r\
    \n                visited[to] = true;\r\n                dist[to] = dist[u] +\
    \ 1;\r\n                prev[to] = u;\r\n                q.push(to);\r\n     \
    \       }\r\n        }\r\n    }\r\n\r\n    vector<int> restore_path(int s, int\
    \ t) {\r\n        vector<int> path = {t};\r\n        while (t != s) {\r\n    \
    \        t = prev[t];\r\n            path.push_back(t);\r\n        }\r\n     \
    \   reverse(path.begin(), path.end());\r\n        return path;\r\n    }\r\n};\r\
    \n"
  dependsOn: []
  isVerificationFile: false
  path: graph_theory\simple_graph.hpp
  requiredBy: []
  timestamp: '2022-06-06 12:37:01-07:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: graph_theory\simple_graph.hpp
layout: document
redirect_from:
- /library\graph_theory\simple_graph.hpp
- /library\graph_theory\simple_graph.hpp.html
title: graph_theory\simple_graph.hpp
---
