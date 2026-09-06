#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    ll tamanho; ll alvo;
    cin >> tamanho >> alvo;
    ll valores[tamanho];
    vector<pair<ll,ll>> posicoes(tamanho);

    for(int i = 0; i < tamanho; ++i){
        cin >> valores[i];
        posicoes[i] = {valores[i], i + 1};
    }

    sort(posicoes.begin(), posicoes.end());

    for(int i = tamanho - 1; i >= 0; i--){
        if(posicoes[i].first >= alvo - 1){
            continue;
        }
        ll tentativa = posicoes[i].first;
        ll l = 0;
        ll r = i - 1;
        while(l < r){
            ll soma = tentativa + posicoes[l].first + posicoes[r].first;
            if(soma == alvo){
                cout << posicoes[i].second << " " << posicoes[l].second << " " << posicoes[r].second << endl;
                return 0;
            }
            if(soma > alvo){
                r--;
            }
            else{
                l++;
            }
        }
    }
    cout << "IMPOSSIBLE" << endl;

    return 0;
}
