#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    int tamanho;
    cin >> tamanho;
    vector<string> matrix(tamanho);
    
    for(int i = 0; i < tamanho; ++i){
        cin >> matrix[i];
    }

    int resposta = 0;
    for(int i = 0; i < tamanho; ++i){
        int tentativa = 1;
        for(int j = 0; j < tamanho; ++j){
            if(i != j and matrix[i] == matrix[j]){
                tentativa ++;
            }
        }
        resposta = max(resposta, tentativa);
    }

    cout << resposta << endl;
    return 0;

}
