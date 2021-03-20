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

bool stcmp(string x,string y){
    if(y.size()!=x.size()) return y.size()>x.size();
    for(int i=0;i<x.size();i++)
        if(x[i]!=y[i]) return y[i]>x[i];
    return 0;
}

signed main() {
    IO;
    string s,s1;
    int q;
    cin>>q;
    while(q--){
        cin>>s>>s1;
        cout<<stcmp(s,s1)<<'\n';
    }
    return 0;
}
