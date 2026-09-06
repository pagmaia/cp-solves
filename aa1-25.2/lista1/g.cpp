#include <bits/stdc++.h>

using namespace std;

int main(){
    int tamanho = 0, elementos = 0;
    cin >> tamanho >> elementos;
    vector<int> valores(tamanho);

    for(int i = 0; i < tamanho; ++i){
        int valor;
        cin >> valor;
        valores[i] = valor;
    }

    sort(valores.begin(), valores.end());
    int resposta = 1000000000 - 1;
    for(int i = 0; i <= elementos; ++i){
        resposta = min(resposta, valores[i + (tamanho - elementos) - 1] - valores[i]);
    }

    cout << resposta << endl;
    
    return 0;
}