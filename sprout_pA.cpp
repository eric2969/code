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

signed main() {
    IO;
    ll n,s,t,t1,e,d1,d2,dt;
    bool found=0;
    cin>>n>>s;
    if(n==2) cout<<(s == 1)+1<<'\n';
    else if(n==3){
        cin>>t;
        d1 = t - s;
        if(s - d1 >= 1) cout<<(s - d1)<<'\n';
        else if(d1%2) cout<<t+d1<<'\n';
        else cout<<s+(d1>>1)<<'\n';
    }
    else{
        cin>>t>>t1;
        d1 = t - s;
        d2 = t1 - t;
        if(d1 != d2){
            if(n==4)
                if(d1 < d2)
                    cout<<t+d1<<'\n';
                else
                    cout<<s+d2<<'\n';
            else{
                cin>>e;
                dt = e-t1;
                if(d1 == dt) cout<<t+d1<<'\n';
                else cout<<s+dt<<'\n';
            }
        }
        else{
            for(int i=0;i<n-4;i++){
                cin>>t;
                dt = t - t1;
                if(dt != d1){
                    found = 1;
                    cout<<t1+d1<<'\n';
                    break;
                }
                t1 = t;
            }
            if(!found){
                if(s - d1 >= 1) cout<<(s - d1)<<'\n';
                else cout<<t1+d1<<'\n';
            }
        }
    }
    return 0;
}

