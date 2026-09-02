#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;


void solve(){
    int n; cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    ll k; ll l;
    cin >> k >> l;
    multiset<ll> picks, del;
    ll front = 0; ll back = 0;
    for(int i = 0; i < k; i++){
        front += a[i];
        back += b[i];
        picks.insert(b[i]);
        if(picks.size() > l){
            auto min = picks.begin();
            ll minval = *min;
            back -= minval;
            picks.erase(min);
            del.insert(minval);
        }
    }
    
    ll ans = front + back;
    for(int i = 0; i < k; i++){
        front += a[n - i - 1];
        front -= a[k - i - 1];

        auto v = del.find(b[k - i - 1]);
        if(v != del.end()){
            del.erase(v);
        }
        else{
            auto l = picks.find(b[k - i - 1]);
            if(l != picks.end()){
                back -= *l;
                picks.erase(l);
                if(!del.empty()){
                    auto bestdel = prev(del.end());
                    back += *bestdel;
                    picks.insert(*bestdel);
                    del.erase(bestdel);
                }

            }
            
        }
        picks.insert(b[n - i - 1]);
        back += b[n - i - 1];

        if(picks.size() > l){
            auto min = picks.begin();
            ll minval = *min;
            back -= minval;
            picks.erase(min);
            del.insert(minval);
        }
        ans = max(ans, front + back);
        
    }

    cout << ans << endl;


}



int main(){
    ios_base::sync_with_stdio(false);	
    cin.tie(NULL);

    int t;
    t = 1;
    while(t--){
	solve();
    }


    return 0;
}



