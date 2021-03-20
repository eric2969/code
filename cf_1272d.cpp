#pragma GCC optimize("Ofast")
#pragma loop_opt(on)
#include <bits/stdc++.h>

#define IO ios::sync_with_stdio(0);cin.tie(0)
#define pb emplace_back
#define all(v) begin(v),end(v)
#define ll long long
#define endl '\n'
#define MAXN maxn
#define ff first
#define ss second

using namespace std;

int best,dp[2*(int)10e5+5][2]={},arr[2*(int)10e5+5]={0},n;
signed main() {
    IO;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>arr[i];
    best=0;
    arr[0]=-1000000;
    for(int i=1;i<=n;i++){
        dp[i][0]=1,dp[i][1]=1;
        if(arr[i]>arr[i-1]){
            dp[i][0]=max(dp[i][0],dp[i-1][0]+1);
            dp[i][1]=max(dp[i][1],dp[i-1][1]+1);
        }
        if(i>1 && arr[i]>arr[i-2]){
            dp[i][1]=max(dp[i][1],dp[i-2][0]+1);
        }
        best=max({best,dp[i][0],dp[i][1]});
    }
    cout<<best<<'\n';
    return 0;
}
