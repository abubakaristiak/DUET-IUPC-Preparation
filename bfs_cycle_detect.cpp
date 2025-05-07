#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<int> adj[N];
bool vis[N];
bool ans = false;
int parentArray[N];

void bfs(int src){
    queue<int> q;
    q.push(src);
    vis[src] = true;

    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        cout<< par <<" ";

        for(int child : adj[par]){
            if(vis[child] == true && parentArray[par] != child){
                ans = true;
            }

            if(vis[child] == false){
                q.push(child);
                vis[child] = true;
                parentArray[child] = par;

            }
        }
    }
    
}
int main()
{
    int n,e;
    cin >> n >> e;
    while (e--)
    {
        int a,b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);

    }
    int source;
    cin>>source;

    bfs(source);

    if(ans){
        cout << "Cycle dectected" << endl;
    }
    else cout << "Cycle not decteded" << endl;
    return 0;
}