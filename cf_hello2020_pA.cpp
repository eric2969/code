#pragma GCC optimize("Ofast")
#pragma loop_opt(on)
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/priority_queue.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/hash_policy.hpp>
#include <ext/pb_ds/trie_policy.hpp>
#define IO ios::sync_with_stdio(0);cin.tie(0)
#define pb emplace_back
#define all(v) begin(v),end(v)
#define ll long long
#define endl '\n'
#define MAXN maxn
#define ff first
#define ss second

using namespace __gnu_pbds;
using namespace std;

signed main() {
    IO;
    int n,m,q,tmp;
    string f[20],s[20];
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>f[i%n];
    for(int i=1;i<=m;i++) cin>>s[i%m];
    cin>>q;
    while(q--){
        cin>>tmp;
        cout<<f[tmp%n]<<s[tmp%m]<<endl;
    }
    return 0;
}

