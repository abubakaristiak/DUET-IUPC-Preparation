/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-05-06 || 19:25:54
 * * * * File    : PreOrder.cpp
*/


#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ull unsigned long long
#define pi pair<ll, ll>
#define vi vector<ll>
#define vpi vector<pi>
#define pb push_back
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define cyes cout << "Yes\n"
#define cno cout << "No\n"
#define sz(x) (ll)(x).size()
#define afor(i,a,b) for (ll i = (a); i < (b); ++i)
#define rfor(i,a,b) for (ll i = (a); i >= (b); --i)
#define asort(v) sort((v).begin(), (v).end())
#define rsort(v) sort((v).begin(), (v).end(), greater<>())
#define fast() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

class Node{
    public:
        int val;
        Node *left;
        Node *right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};


void postorder(Node *root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->val << " ";
}


Node* makeTree() {
    int val; cin >> val;
    if(val==-1){
        return NULL;
    }
    Node *root=new Node(val);
    queue<Node*> q;
    q.push(root);

    while (!q.empty())
    {
        Node *cur=q.front();
        q.pop();

        int leftval, rightval;
        cin >> leftval;
        if(leftval!=-1){
            cur->left=new Node(leftval);
            q.push(cur->left);
        }
        cin >> rightval;
        if(rightval!=-1){
            cur->right=new Node(rightval);
            q.push(cur->right);
        }
    }
    return root;
    
}

void solve(){
    Node* root=makeTree();
    postorder(root);
    cout << endl;
}

int main() {
    fast();
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;

    // Alhamdulillah
}