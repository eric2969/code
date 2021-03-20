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

ll mods = 998244353, po = 1, bct = 0, ans = 0;

signed main() {
    IO;
    int n,m;
    string a,b;
    cin>>n>>m>>a>>b;
    reverse(all(a));
    reverse(all(b));
    for(auto i:b) if(i=='1') bct++;
    for(int i=0;i<n;i++){
        if(a[i]=='1')
            ans = (ans + bct * po)%mods;
        if(i<m && b[i]=='1') bct--;
        po = (po * 2) % mods;
    }
    cout<<ans<<endl;
    return 0;
}

