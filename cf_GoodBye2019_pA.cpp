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
    int q,n1,n2,tmp,m;
    bool win;
    cin>>q;
    while(q--){
        win=0;
        cin>>m>>n1>>n2;
        for(int i=0;i<n1;i++){
            cin>>tmp;
            if(tmp==m) win=1;
        }
        for(int i=0;i<n2;i++) cin>>tmp;
        cout<<(win?"YES":"NO")<<endl;
    }
    return 0;
}

