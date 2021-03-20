#pragma GCC optimize("Ofast")
#pragma loop_opt(on)
#include <bits/stdc++.h>

#define IO ios::sync_with_stdio(0);cin.tie(0)
#define pb emplace_back
#define all(v) begin(v),end(v)
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define MAXN maxn
#define ff first
#define ss second

using namespace std;

ull dp[10000+10]={1};
signed main() {
    IO;
    int n,p,t;
    while(cin>>n>>p&&(n||p)){
        memset(dp,0,sizeof(dp));
        dp[0]=1;
        for(int i=1;i<=n;i++){
            cin>>t;
            for(int j=t;j<=p;j++) dp[j]+=dp[j-t];
        }
        cout<<dp[p]<<endl;
    }
    return 0;
}
