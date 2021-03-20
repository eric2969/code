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

struct bs{
    int left = -1, right = -1;
    int value = 0;
};

class bst{
    private:
        vector<bs> v;
        int num=0, root = 0;
        bs tmp;
    public:
        bst(){
            v.clear();
        }

        void insert(int i){
            tmp.value = i;
            tmp.left = -1;
            tmp.right = -1;
            if(num == 0){
               v.pb(tmp);
               num++;
               return;
            }
            int pare = root, now = root;
            while(now != -1){
                pare = now;
                if(v[now].value <= i)
                    now = v[now].right;
                else
                    now = v[now].left;
            }
            v.pb(tmp);
            if(v[pare].value <= i)
                v[pare].right = num++;
            else
                v[pare].left = num++;
        }

        void preorder(int node = -2){
            if(node == -2) node=root;
            if(node == -1) return;
            cout<<v[node].value<<' ';
            preorder(v[node].left);
            preorder(v[node].right);
        }

        void inorder(int node = -2){
            if(node == -2) node=root;
            if(node == -1) return;
            inorder(v[node].left);
            cout<<v[node].value<<' ';
            inorder(v[node].right);
        }

        void postorder(int node = -2){
            if(node == -2) node=root;
            if(node == -1) return;
            postorder(v[node].left);
            postorder(v[node].right);
            cout<<v[node].value<<'\n';
        }

        bool find(int i){
            int now = 0;
            while(now != -1){
                if(v[now].value < i)
                    now = v[now].right;
                else if(v[now].value > i)
                    now = v[now].left;
                else
                    return 1;
            }
            return 0;
        }
/*
        bool del(int i){
            int now = 0, pare = 0, dele, ans;
            bool right = 1, predir, iroot = 0;
            while(now != -1){
                predir = right;
                ans = pare;
                pare = now;
                if(v[now].value < i)
                    now = v[now].right, right = 1;
                else if(v[now].value > i)
                    now = v[now].left, right = 0;
                else
                    break;
            }
            if(now == -1) return 0;
            if(pare == root) iroot=1;
            dele = pare;
            now = v[pare].left;
            pare = now;
            while(now != -1){
                pare = now;
                if(v[now].value <= i)
                    now = v[now].right;
                else if(v[now].value > i)
                    now = v[now].left;
            }
            v[pare].left = v[dele].left;
            v[pare].right = v[dele].right;
            if(iroot){
               root = pare;
               return 1;
            }
            if(predir)
                v[ans].right = pare;
            else
                v[ans].left = pare;
            return 1;
        }
*/

};

signed main() {
    IO;
    int i,tmp;
    bst tre;
    cin>>i;
    while(i--){
        cin>>tmp;
        tre.insert(tmp);
    }
    cin>>i;
    while(i--){
        cin>>tmp;
  //      cout<<tre.del(tmp)<<endl<<flush;
    }
    tre.preorder();
    return 0;
}

