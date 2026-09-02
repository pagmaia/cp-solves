#include "bits/stdc++.h"

using namespace std;

#define ll long long

void operacao(int p, int v, vector<ll> &a, unordered_map<ll, ll> &freq){
    freq[a[p]] --;
    if(!freq[a[p]] and a[p] != 0){
        freq.erase(a[p]);
    }
    if(!freq.count(v)){
        freq[v] = 1;
    }
    else{
        freq[v] ++;
    }
    a[p] = v;
}

void solve(){
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n);
    unordered_map<ll, ll> freq;
    freq[0] = 0;
    for(int i = 0; i < n; i++){
        ll num;
        cin >> num;
        a[i] = num;
        if(!freq.count(num)){
            freq[num] = 1;
        }
        else{
            freq[num] ++;       
        }
    }
    //3 3 0 0 4
    //3 5 0 0 4 
    for(int i = 0; i < q; i++){
        int t;
        cin >> t;
        if(t == 1){
            int p, v;
            cin >> p >> v;
            operacao(p - 1, v, a, freq);
        }
        else{
            cout << freq.size() - 1 << "\n";
        }
    }

}

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;

}