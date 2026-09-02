#include "bits/stdc++.h"

#define ll long long

using namespace std;




int main(){
    int n, m;
    cin >> n >> m;
    vector<int> pepper(m);
    for(int i = 0; i < m; i++){
        cin >> pepper[i];
    }
    vector<pair<int, int>> pratos(n);
    for(int i = 0; i < n; i++){
        int b, c;
        cin >> b >> c;
        pratos[i] = make_pair(b, c);
    }
    sort(pratos.begin(), pratos.end(), [](const auto &a, const auto &b){
        return a.second > b.second;
    });
    
    int resposta = 0;

    for(auto prato : pratos){
        int p = prato.first;
        int maximo = prato.second;
        if(maximo > pepper[p - 1]){
            resposta += pepper[p - 1];
            pepper[p - 1] = 0;
        }
        else{
            resposta += maximo;
            pepper[p - 1] -= maximo;
        }
    }
    cout << resposta;



    return 0;
}



