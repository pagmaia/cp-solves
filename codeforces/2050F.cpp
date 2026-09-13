#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;

int n; vector<int> a; vector<int> b;

struct seg_tree{
    vector<int> seg;

    void init(){
        seg.resize(4 * n);
        build(1, n - 1, 1);
    }
    void build(int l, int r, int node){
        if(l == r){
            seg[node] = b[l];
            return;
        }
        int mid = (l + r) / 2;
        build(l, mid, node * 2);
        build(mid + 1, r, node * 2 + 1);
        seg[node] = mod(seg[node * 2], seg[node * 2 + 1]);
    }
    int query(int l, int r, int s, int e, int node){
        if(s > r or l > e) return 0;
        if(s <= l and e >= r) return seg[node];
        int mid = (l + r) / 2;
        return mod(query(l, mid, s, e, node * 2), query(mid + 1, r, s, e, node * 2 + 1));
    }

    int mod(int left, int right){
        return gcd(left, right);
    }
    void print(){
        for(int c : seg) cout << c << " ";
        cout << endl;
    }

};

void solve(){
    int q;
    cin >> n >> q;
    a.resize(n + 1);
    for(int i = 1; i <= n; i++) cin >> a[i];
    b.resize(n);
    for(int i = 1; i <= n - 1; i++) b[i] = abs(a[i] - a[i + 1]);
    
    
    seg_tree seg;
    if(n != 1) seg.init();
    
    for(int i = 0; i < q; i++){
        int l, r;
        cin >> l >> r;
        if(l == r) cout << 0 << " ";
        else cout << seg.query(1, n - 1, l, r - 1, 1) << " ";
    }
    cout << endl;

}
int main(){
    ios_base::sync_with_stdio(false);	
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while(t--){
		solve();
    }


    return 0;
}



