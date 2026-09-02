#include <bits/stdc++.h>

using namespace std;

int main(){
    int tamanho, target, valor, complemento;
    vector<int> valores;
    map<int, int> complementos;
    cin >> tamanho >> target;

    for(int i = 0; i < tamanho; ++i){
        cin >> valor;
        valores.push_back(valor);
    }
    
    for(int i = 0; i < tamanho; ++i){
        complementos[valores[i]] = i;
    }

    bool resposta = false;
    for(int i = 0; i < tamanho; ++i){
        complemento = target - valores[i];
        if(complementos.count(complemento) and complementos[complemento] != i){
            cout << i + 1 << " " << complementos[complemento] + 1 << endl;
            resposta = true;
            break;
        }

    }
    if(resposta == false){
        cout << "IMPOSSIBLE" << endl;
    }
    return 0;
}
