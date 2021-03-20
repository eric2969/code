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
    unsigned ll a,n,tmp,sum,xo;
    cin>>a;
    while(a--){
        sum=0;
        xo=0;
        cin>>n;
        while(n--){
            cin>>tmp;
            sum+=tmp;
            xo^=tmp;
        }
        if(sum==(xo<<1)) cout<<0<<"\n\n";
        else if(!xo){
            cout<<1<<'\n'<<sum<<'\n';
        }
        else{
            cout<<2<<'\n'<<xo<<' '<<(sum+xo)<<'\n';
        }
    }
    return 0;
}

