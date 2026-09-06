#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    ll tamanho; 
    cin >> tamanho;
    vector<ll> array(tamanho);
    vector<ll> prefixsum(tamanho + 1);
    map<ll,ll> prefixindice;
    prefixsum[0] = 0;

    for(int i = 0; i < tamanho; ++i){
        cin >> array[i];
        prefixsum[i + 1] = prefixsum[i] + array[i];

    }

    ll resposta = 0;
    prefixindice[0] = 1;

    for(int i = 1; i <= tamanho; ++i){
        resposta += prefixindice[(prefixsum[i] % tamanho + tamanho) % tamanho];
        prefixindice[(prefixsum[i] % tamanho + tamanho) % tamanho] += 1;
    }
    // agora calculando o resto direito
    cout << resposta << endl;
    // 3 4 -1 13 16
    // 3 4 6 13 17
    // 3 4 6 15 20
    return 0;
}
// 3 4 6 13 15 18
// 312, 1272, 312723, 723
// 