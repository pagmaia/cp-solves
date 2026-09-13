#include "bits/stdc++.h"
 
#define ll long long
#define endl "\n"
 
using namespace std;
 

int n; string s;

struct seg_tree{
    struct node{
        int mx; int op; int clos;
        node(int a = 0, int b = 0, int c = 0){
            mx = a;
            op = b;
            clos = c;
        }
    };
    vector<node> seg;
    void init(){
        seg.resize(4 * n);
        build(1, n, 1);
    }
    void build(int l, int r, int nd){
        if(l == r){
            if(s[l - 1] == '(') seg[nd] = node(0, 1, 0);
            else seg[nd] = node(0, 0, 1);
            return;
        }
        int mid = (l + r) / 2;
        build(l, mid, nd * 2);
        build(mid + 1, r, nd * 2 + 1);
        seg[nd] = merge(seg[nd * 2], seg[nd * 2 + 1]);
    }
    node query(int l, int r, int s, int e, int nd){
        if(s > r or l > e) return node(0, 0, 0);
        if(s <= l and e >= r) return seg[nd];
        int mid = (l + r) / 2;
        return merge(query(l, mid, s, e, nd * 2), query(mid + 1, r, s, e, nd * 2 + 1));
    }
    node merge(node left, node right){
        int match = min(left.op, right.clos);
        int mx = left.mx + right.mx + 2 * match;
        int op = left.op + right.op - match;
        int clos = left.clos + right.clos - match;
        return node(mx, op, clos);
    }
};

void solve(){
    cin >> s;
    int q; cin >> q;
    n = (int) s.size();
    seg_tree seg;
    seg.init();
    for(int i = 0; i < q; i++){
        int l, r;
        cin >> l >> r;
        cout << seg.query(1, n, l, r, 1).mx << endl;
    }

}	
 
int main(){
    ios_base::sync_with_stdio(false);	
    cin.tie(NULL);
 
    int t = 1;
    //cin >> t;
    while(t--){
		solve();
    }
 
 
    return 0;
}

