#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    ll tamanho; ll target;
    cin >> tamanho >> target;
    vector<ll> array(tamanho);
    map<ll, vector<pair<ll,ll>>> somas;

    for(int i = 0; i < tamanho; ++i){
        cin >> array[i];
    }

    for(int i = 0; i < tamanho; ++i){
        for(int j = i + 1; j < tamanho; ++j){
            ll somapares = array[i] + array[j];
            somas[somapares].push_back({i + 1, j + 1});
        }
    }
    
    for(auto const& somapar : somas){
        ll soma = somapar.first;
        const auto& par1 = somapar.second;

        if(somas.find(target - soma) != somas.end()){
            const auto& par2 = somas[target - soma];
            
            for(const auto& pares1 : par1){
                for(const auto& pares2 : par2){
                    if(pares1.first != pares2.first and pares1.first != pares2.second and pares1.second != pares2.first and pares1.second != pares2.second){
                        cout << pares1.first << " " << pares1.second << " " << pares2.first << " " << pares2.second<< endl;
                        exit(0);
                }
            }
        }
        }
    }

    cout << "IMPOSSIBLE" << endl;
    return 0;
}
// 1 2 2 3 3 3 5 8
// 2 8 3 2
// 3 3 8 1