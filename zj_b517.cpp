#pragma GCC optimize("Ofast")
#pragma loop_opt(on)
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/priority_queue.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/hash_policy.hpp>
#include <ext/pb_ds/trie_policy.hpp>
#define IO ios::sync_with_stdio(0);cin.tie(0)
#define pb emplace_back
#define all(v) begin(v),end(v)
#define ll long long
#define endl '\n'
#define MAXN maxn
#define ff first
#define ss second

using namespace __gnu_pbds;
using namespace std;

bool visited[100]={0},exist[100]={0};
vector<int> graph[100];
bool ntree=0;

void dfs(int now,int be){
    visited[now]=1;
    for(auto i:graph[now])
        if(i != be && visited[i]) ntree=1;
        else if(i != be) dfs(i,now);
}

signed main() {
    IO;
    stringstream ss;
    string s;
    int cas,pare,son,_;
    cin>>cas;
    cin.ignore();
    while(cas-- && getline(cin,s) ){
        ss.str("");
        ss.clear();
        ss<<s;
        ntree=0;
        while(ss>>s && !ss.fail()){
            pare=0;
            son=0;
            for(_=0;s[_] != ',';_++)
                pare = (pare * 10 + s[_] - '0');
            for(++_;_<s.size();_++)
                son = (son * 10 + s[_] - '0');
            exist[pare]=1;
            exist[son]=1;
            graph[pare].pb(son);
            graph[son].pb(pare);
        }
        dfs(son,-1);
        for(int i=0;i<81;i++)
            if(exist[i]){
                ntree=!visited[i]+ntree;
                visited[i]=0;
                exist[i]=0;
                graph[i].clear();
            }
        cout<<(ntree?"F":"T")<<endl;
    }
    return 0;
}

