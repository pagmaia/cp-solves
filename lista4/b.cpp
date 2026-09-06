#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){

    ll tamanho; ll target;
    cin >> tamanho >> target;
    vector<ll> array(tamanho);
    vector<ll> prefixsum(tamanho + 1);
    map<ll,ll> prefixindice;
    prefixsum[0] = 0;

    for(int i = 0; i < tamanho; ++i){
        cin >> array[i];
        prefixsum[i + 1] = prefixsum[i] + array[i];
        prefixindice[prefixsum[i + 1]] = 0;
    }
    ll resposta = 0;
    prefixindice[0] = 1;

    for(int i = 1; i <= tamanho; ++i){
        resposta += prefixindice[prefixsum[i] - target];
        prefixindice[prefixsum[i]] += 1;
    }
    // 2 1 4 9 7
    
    cout << resposta << endl;

    return 0;
}   