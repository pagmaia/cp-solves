#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;

int n; vector<int> a;

struct seg_tree{
    vector<int> seg;
    void init(){
        seg.resize(4 * n);
        build(1, n, 1);
    }
    void build(int l, int r, int node){
        if(l == r){
            seg[node] = a[l];
            return;
        }
        int mid = (l + r) / 2;
        build(l, mid, node * 2);
        build(mid + 1, r, node * 2 + 1);
        seg[node] = maxMusica(seg[node * 2], seg[node * 2 + 1]);
    }
    int query(int l, int r, int s, int e, int node){
        if(l > e or r < s) return 0;
        if(s <= l and r <= e) return seg[node];
        int mid = (l + r) / 2;
        return maxMusica(query(l, mid, s, e, node * 2), query(mid + 1, r, s, e, node * 2 + 1));
    }
    int maxMusica(int left, int right){
        return max(left, right);
    }

};

void solve(){
    int q;
    cin >> n >> q;
    a.resize(n + 1);
    map<int, int> mp;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        mp[a[i]] = i;
    }
    seg_tree seg;
    seg.init();

    for(int i = 0; i < q; i++){
        int l, r;
        cin >> l >> r;
        int mx = seg.query(1, n, l, r, 1);
        int pos = mp[mx];
        int dist = r - l; dist++;
        if(l == pos or r == pos or dist % 2 == 0) cout << "Adilson" << endl;
        else cout << "Reginaldo" << endl;
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



