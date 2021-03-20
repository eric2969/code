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
    ll x, tmp;
    vector<ll> pr;
    pr.clear();
    cin>>x;
    if(x == 1) pr.pb(1);
    for(ll i = 2;i*i<=x;i++){
        if(!(x%i)){
            tmp = 1;
            while(!(x%i)) tmp*=i,x/=i;
            pr.pb(tmp);
        }
    }
    if(x != 1) pr.pb(x);
    if(!(pr.size()%2)){
        cout<<pr[pr.size()/2-1]<<' '<<pr[pr.size()/2];
    }
    else{
        cout<<1<<' '<<pr[0];
    }
    return 0;
}

