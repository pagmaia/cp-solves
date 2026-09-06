#include <bits/stdc++.h>

#define ll long long

using namespace std;




void dp(vector<int> &resposta, set<int> &el, int n){
    for(int i = 1; i <= n; i++){
        if(el.count(i)){
            resposta[i] = 1;
        }
        else{
            int a = i;
    
            while(a > 4){

            }




        }
    }

}

void solve(){
    int n;
    cin >> n;
    vector<int> resposta(n + 1, -1);
    set<int> el;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        el.insert(a);
    }

    dp(resposta, el, n);
    for(int p = 1; p <= n; p++){
        cout << resposta[p] << " ";
    }
    cout << "\n";
    
}



int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}