#pragma GCC optimize("Ofast")
#pragma loop_opt(on)
#include <bits/stdc++.h>

#define IO ios::sync_with_stdio(0);cin.tie(0)
#define pb emplace_back
#define all(v) begin(v),end(v)
#define ll long long
#define zero(x) (x>0?(x):(0))
#define endl '\n'
#define MAXN maxn
#define ff first
#define ss second

using namespace std;

signed main() {
    IO;
    int q,ans,arr[3];
    cin>>q;
    while(q--){
        for(int i=0;i<3;i++) cin>>arr[i];
        ans=0;
        for(int i=0;i<3;i++)
            for(int j=i+1;j<3;j++) ans+=abs(arr[i]-arr[j]);
        cout<<zero(ans-4)<<'\n';
    }
    return 0;
}
