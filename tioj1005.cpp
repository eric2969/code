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

int gcd(int a,int b){
    while(b) swap(a,b),b=b%a;
    return a;
}

signed main() {
    IO;
    vector<int> n;
    int a,ans;
    while(cin>>a&&a){
        ans=0;
        n.clear();
        for(int i=0;i<a;i++){
            cin>>ans;
            n.pb(ans);
        }
        ans=0;
        for(int i=0;i<a;i++)
            for(int j=i+1;j<a;j++)
                if(gcd(n[i],n[j]) == 1) ans++;
        if(ans) cout<<fixed<<setprecision(6)<<sqrt(3.0*a*(a-1)/ans)<<endl;
        else cout<<"No estimate for this data set."<<endl;
        
    }
    return 0;
}
