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
#define long long
#define ull unsigned long long
#define endl '\n'
#define MAXN maxn
#define ff first
#define ss second

using namespace __gnu_pbds;
using namespace std;

constexpr const ull rmods = 500000004;
constexpr const ull mods = 1000000007;
ull po, xi = 3, yi = 2,tmp;

signed main() {
    IO;
    int n;
    cin>>n;
    while(n--){
        xi=3;
        yi=2;
        cin>>po;
        po--;
        while(po){
            tmp = xi;
            if(po & 1){
                xi = (3LL*xi + 4LL*yi)%mods;
                yi = (2LL*tmp + 3LL*yi)%mods;
                po--;
            }
            else{
                xi = (xi*xi + 2LL*yi*yi)%mods;
                yi = (2LL*tmp*yi)%mods;
                po>>=1;
            }
        }
        cout<<((xi+1)*rmods)%mods<<' '<<(yi*rmods)%mods<<'\n';
    }
    return 0;
}

