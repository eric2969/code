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

vector<int> small,big;
unsigned ll l,n,tmp,x,y,acnt = 0,ncnt = 0;
unsigned ll ans=0;
bool asc=0;

signed main() {
    IO;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>l>>tmp;
        asc = 0;
        x = tmp;
        y = tmp;
        for(int j=1;j<l;j++){
            cin>>tmp;
            if(tmp > y) asc = 1;
            x = max(x,tmp);
            y = min(y,tmp);
        }
        if(asc) acnt++;
        else{
            ncnt++;
            small.pb(y);
            big.pb(x);
        }
    }
    ans = (acnt * (n-acnt))<<1;
    ans += (acnt*acnt);
    sort(all(small));
    for(auto i:big)
        ans += (lower_bound(all(small),i)-small.begin());
    cout<<ans<<endl;
    return 0;
}

