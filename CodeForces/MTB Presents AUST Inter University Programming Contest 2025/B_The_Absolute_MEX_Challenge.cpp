/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-04-30 || 13:03:54
 * * * * File    : B_The_Absolute_MEX_Challenge.cpp
*/


#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define ll long long
#define pi pair<ll, ll>
#define asort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(), greater<>())
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define cyes cout << "Yes\n"
#define cno cout << "No\n"
#define endl "\n"
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


void solve()
{
    int n; cin >> n;
    vector<int> perm(n+1, 0);
    vector<bool> vis(n+1, false);
    perm[n]=n;
    vis[n]=true;

    vector<int> tmp;
    int l=2, r=n-1;
    bool ok=true;
    while (l<=r)
    {
        if(ok){
            tmp.push_back(r);
            r--;
        }else{
            tmp.push_back(l);
            l++;
        }
        ok=!ok;
    }

    int small=1, large=n-1;
    for(int i=0; i<tmp.size(); i++){
        if(i%2==0){
            perm[tmp[i]]=small;
            vis[small]=true;
            small++;
        }else{
            perm[tmp[i]]=large;
            vis[large]=true;
            large--;
        }
    }

    for(int i=1; i<=n; i++){
        if(!vis[i]){
            perm[1]=i;
            break;
        }
    }
    for(int i=1; i<=n; i++){
        cout << perm[i] << " ";
    }
    cout << endl;
}


int main()
{
    fast();
    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;


// Alhamdulillah
}