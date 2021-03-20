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
char c;
ll n,k,cnt;
int ava[28]={0},ok[2*(int)10e5]={0};
signed main() {
    IO;
    cin>>n>>k>>s;
    for(int i=0;i<k;i++) cin>>c,ava[c-'a']=1;
    for(int i=0;i<s.length();i++) ok[i]=ava[s[i]-'a'];
    cnt=0;
    n=0;
    for(int i=0;i<s.length();i++){
        if(ok[i]) cnt++;
        else{
            n+=(cnt*(cnt+1)>>1);
            cnt=0;
        }
    }
    n+=(cnt*(cnt+1)>>1);
    cout<<n<<'\n';
    return 0;
}
