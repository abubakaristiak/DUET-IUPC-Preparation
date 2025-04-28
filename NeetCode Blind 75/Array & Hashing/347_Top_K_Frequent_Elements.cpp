/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-04-28 || 07:48:02
 * * * * File    : 347_Top_K_Frequent_Elements.cpp
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


class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        map<int, int> mp;
        for(int i=0; i<n; i++){
            mp[nums[i]]++;
        }
        vector<pair<int, int>> res;
        for(auto it:mp){
            res.push_back({it.second, it.first});
        }
        rsort(res);
        vector<int> ans;
        for(int i=0; i<k; i++){
            ans.push_back(res[i].second);
        }
        return ans;
    }
};