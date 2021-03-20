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

int cut[(int)10e4+10]={0},t,n,now,ans;

signed main() {
    IO;
    cin>>t>>n;
    now=0;
    ans=1;
    for(int i=0;i<n;i++) cin>>cut[i];
    for(int i=0;i<n-1;i++){
        if(cut[i+1]-now>t){
            now = cut[i];
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}

