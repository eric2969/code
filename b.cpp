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
     
    ll arr[(int)1e5+10]={0};
     
    signed main() {
        IO;
        ll big = 0, sum = 0, n, q, m;
        cin>>n;
        while(n--){
            cin>>q;
            big = 0;
            sum = 0;
            for(int i=1;i<=q;i++)
                cin>>arr[i],sum+=arr[i];
            m = 0;
            for(int i=1;i<q;i++){
                m = max(m+arr[i] , 0LL);
                big = max(m, big);
            }
            m = 0;
            for(int i=2;i<=q;i++){
                m = max(m+arr[i] , 0LL);
                big = max(m, big);
            }
            cout<<(sum>big?"YES\n":"NO\n");
        }
        return 0;
    }
     
