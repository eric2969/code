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
    int t,n,x,y,pos;
    bool pass;
    cin>>t;
    while(t--){
        pass=0;
        cin>>n>>x;
        for(int i=1;i<n;i++){
            cin>>y;
            if(abs(y-x)>=2) pass=1,pos=i;
            x=y;
        }
        if(pass){
            cout<<"YES\n";
            cout<<pos<<" "<<pos+1<<'\n';
        }
        else cout<<"NO\n";
    }
    return 0;
}

