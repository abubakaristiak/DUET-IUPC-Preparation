#include <bits/stdc++.h>
using namespace std;

vector<int> v[1005];
bool vis[1005];
int parent[1005];

void dfs(int src) {
    cout << src << " ";
    vis[src] = true;

    for (int child : v[src]) {
        if (!vis[child]) {
            parent[child] = src;
            dfs(child);
        }
    }
}

void print_path(int des) {
    if (!vis[des]) {
        cout << "No path to destination node.\n";
        return;
    }

    vector<int> path;
    int x = des;
    while (x != -1) {
        path.push_back(x);
        x = parent[x];
    }

    reverse(path.begin(), path.end());
    for (int val : path) {
        cout << val << " ";
    }
    cout << "\n";
}

void solve() {
    int n, e;
    cin >> n >> e;

    while (e--) {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a); // undirected
    }

    int src, des;
    cin >> src >> des;

    memset(vis, false, sizeof(vis));
    parent[src] = -1;
    dfs(src);
    print_path(des);
}

int main() {
    solve();
    return 0;
}
