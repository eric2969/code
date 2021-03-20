#pragma GCC optimize("Ofast")
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/priority_queue.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/hash_policy.hpp>
#include <ext/pb_ds/trie_policy.hpp>
#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
#include <math.h>
#include <map>
#define IO ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define fs .first
#define sc .second
#define _ <<' '<<

using namespace __gnu_pbds;
using namespace std;

inline ll getll(){
    register char c = getchar_unlocked();
    register ll x = 0;
    register short neg = 1;
    while((c<'0'||c>'9')&&c!='-') c = getchar_unlocked();
    if(c=='-') neg = -1,c = '0';
    if(c==EOF) return EOF;
    while((c>='0'&&c<='9')) x = x*10+c-'0',c = getchar_unlocked();
    return x * neg;
}

inline int getint(){
    register char c = getchar_unlocked();
    register int x = 0;
    register short neg = 1;
    while((c<'0'||c>'9')&&c!='-') c = getchar_unlocked();
    if(c=='-') neg = -1,c = '0';
    if(c==EOF) return EOF;
    while((c>='0'&&c<='9')) x = x*10+c-'0',c = getchar_unlocked();
    return x * neg;
}

signed main(){
    IO;
    
}
