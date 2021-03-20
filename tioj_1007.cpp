#pragma GCC optimize("Ofast")
#pragma loop_opt(on)
#include <iostream>
#define IO ios::sync_with_stdio(0);cin.tie(0)
#define ll long long
#define endl '\n'

using namespace std;

unsigned ll dp[91]={1};
short n,m;

signed main() {
    IO;
    cin>>n>>m;
    for(short t=1;t<=n;t++) dp[t]=1<<t;
    dp[n+1]=(1<<(n+1))-1;
    for(short t=n+2;t<=m;t++) dp[t]=(dp[t-1]<<1)-dp[t-n-2];
    cout<<dp[m]<<endl;
    return 0;
}

