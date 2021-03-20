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

string s;
int cas,a,b,dir[4]={0},f[256]={0};
signed main() {
    IO;
    f['U']=0,f['D']=1,f['L']=2,f['R']=3;
    cin>>cas;
    while(cas--){
        a=0,b=0;
        for(int i=0;i<4;i++) dir[i]=0;
        cin>>s;
        for(int i=0;i<s.size();i++)
            dir[f[s[i]]]++;
        a=min(dir[0],dir[1]),b=min(dir[2],dir[3]);
        if(a==0 && b) b=1;
        if(b==0 && a) a=1;
        cout<<((a+b)<<1)<<'\n';
        for(int i=0;i<a;i++) cout<<"U";
        for(int i=0;i<b;i++) cout<<"L";
        for(int i=0;i<a;i++) cout<<"D";
        for(int i=0;i<b;i++) cout<<"R";
        cout<<endl;

    }
    return 0;
}
