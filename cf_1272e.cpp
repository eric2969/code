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

int n,arr[2*(int)10e5+10],dis[2*(int)10e5+10];
vector<int> v[2*(int)10e5+10];
signed main() {
    IO;
    int z;
    cin>>n;
    for(int i=1;i<=n;i++) {
        cin>>arr[i];
        dis[i]=-1;
        if(i-arr[i]>=1) v[i-arr[i]].pb(i);
        if(i+arr[i]<=n) v[i+arr[i]].pb(i);
    }
    queue<int> q;
    for(int i=1;i<=n;i++){
        if(i-arr[i]>=1 && ((arr[i]^(arr[i-arr[i]]))&1)) dis[i]=1,q.push(i);
        if(i+arr[i]<=n && ((arr[i]^(arr[i+arr[i]]))&1)) dis[i]=1,q.push(i);
    }
    while(!q.empty()){
        z=q.front(); q.pop();
        for(auto j:v[z]) if(dis[j]==-1) dis[j]=dis[z]+1,q.push(j);
    }
    for(int i=1;i<=n;i++)
        cout<<dis[i]<<' ';
    return 0;
}
