/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-04-28 || 03:27:04
 * * * * File    : 125_Valid_Palindrome.cpp
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
    bool isPalindrome(string s) {
        string org; 
        for(int i=0; i<s.size(); i++){
            if(isalnum(s[i])){
                org.push_back(tolower(s[i]));
            }
        }
        int i=0, r=org.size()-1;     // cout << org[i] << " " << org[r] << endl;
        while (i<r)
        {
            if(org[i]!=org[r]){
                return false;
            }
            i++; r--;
        }
        return true;

    }
};
