/*
 * Author: hemis, Kalpesh Patel
 * Description: Simple graph struct for dfs and bfs.
*/

struct graph {

    struct edges {
        int to = -1;
        edges(int _to) : to(_to) {};
    };

    int n;
    vector<vector<edges>> adj;
    vector<int> dist;
    vector<bool> visited;
    vector<int> prev;

    graph(int _n) {
        int n = _n;
        dist.resize(n, INT_MAX);
        adj.resize(n);
        visited.resize(n);
        prev.resize(n, -1);
    }

    void add_directional_edge(int from, int to) {
        adj[from].push_back(to);
    }

    void add_bidirectional_edge(int a, int b) {
        add_directional_edge(a, b);
        add_directional_edge(b, a);
    }

    void dfs(int u) {
        visited[s] = true;
        for (auto e : adj[s]) {
            int v = e.to;
            if (!visited[v]) {
                dfs(v);
            }
        }
    }

    void bfs(int source) {
        queue<int> q;
        q.push(source);
        dist[source] = 0;
        visited[source] = true;
        while (!q.empty()) {
            int u = q.front(); q.pop();
            for (auto& e : adj[u]) {
                int to = e.to;
                if (visited[to]) continue;
                visited[to] = true;
                dist[to] = dist[u] + 1;
                prev[to] = u;
                q.push(to);
            }
        }
    }

    vector<int> restore_path(int s, int t) {
        vector<int> path = {t};
        while (t != s) {
            t = prev[t];
            path.push_back(t);
        }
        reverse(path.begin(), path.end());
        return path;
    }
};
