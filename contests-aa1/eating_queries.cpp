#include <bits/stdc++.h>

#define ll long long

using namespace std;

void solve(){
    int n; int q;
    cin >> n >> q;
    vector<int> doces(n);
    for(int i = 0; i < n; i++){
        cin >> doces[i];
    }
    sort(doces.begin(), doces.end());
    reverse(doces.begin(), doces.end());
    vector<int> prefixsum(n + 1);
    prefixsum[0] = 0;
    for(int i = 0; i < n; ++i){
        prefixsum[i + 1] = prefixsum[i] + doces[i];
    }
    
    for(int i = 0; i < q; ++i){
        int query;
        cin >> query;

        int ini = 0;
        int fim = n;
        int resposta = -1;

        while(ini <= fim){
            int mid = ini + (fim - ini) / 2;

            if(prefixsum[mid] >= query){
                resposta = mid;
                fim = mid - 1;
            }
            else{
                ini = mid + 1;
            }
        }
        cout << resposta << endl;
    }
//9 14 18 22 25 28 29 30 
}

int main(){
    int testes;
    cin >> testes;
    while(testes--){
        solve();
    }
    
    return 0;
}