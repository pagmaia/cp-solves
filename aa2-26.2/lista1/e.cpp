#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;
ll n; vector<ll> a;

struct seg_tree{
    vector<ll> seg;
    void init(){
        seg.resize(4 * n);
        build(1, n, 1);
    }
    void build(ll l, ll r, ll node){
        if(l == r){
            if(a[l] > 0) seg[node] = 1;
            else if(a[l] < 0) seg[node] = -1;
            else seg[node] = 0;
            return;
        }
        ll mid = (l + r) / 2;
        build(l, mid, node * 2);
        build(mid + 1, r, node * 2 + 1);
        seg[node] = merge(seg[node * 2], seg[node * 2 + 1]);
    }
    ll query(ll l, ll r, ll s, ll e, ll node){
        if(s > r or l > e) return 1;
        if(s <= l and e >= r) return seg[node];
        ll mid = (l + r) / 2;
        return merge(query(l, mid, s, e, node * 2), query(mid + 1, r, s, e, node * 2 + 1));
    }
    void update(ll l, ll r, ll val, ll id, ll node){
        if(l == r){
            if(val > 0) seg[node] = 1;
            else if(val < 0) seg[node] = -1;
            else seg[node] = 0;
            return;
        }
        ll mid = (l + r) / 2;  
        if(id <= mid) update(l, mid, val, id, node * 2);
        else update(mid + 1, r, val, id, node * 2 + 1);
        seg[node] = merge(seg[node * 2], seg[node * 2 + 1]);
    }
    ll merge(ll left, ll right){
        return left * right;
    }
    void prll(){
        for(ll c : seg) cout << c << " ";
        cout << endl;
    }

};

void solve(ll q){
    a.resize(n + 1);
    for(ll i = 1; i <= n; i++) cin >> a[i];
    seg_tree seg;
    seg.init();
    string ans = "";
    for(ll i = 0; i < q; i++){
        char c; ll l; ll r;
        cin >> c >> l >> r;
        if(c == 'C') seg.update(1, n, r, l, 1);
        else{
            ll res = seg.query(1, n, l, r, 1);
            if(!res) ans += '0';
            else if(res < 0) ans += '-';
            else ans += '+';
        }
    }
    cout << ans << endl;

}

int main(){
    ios_base::sync_with_stdio(false);	
    cin.tie(NULL);

    ll q;
    while(cin >> n >> q){
		solve(q);
    }


    return 0;
}



