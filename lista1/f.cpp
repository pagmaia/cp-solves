#include <bits/stdc++.h>

using namespace std;

int quantidadesubstring(vector<char> sequenciabase, int tamanho){
    int resultado = 0;

    for(int i = 0; i < tamanho - 2; ++i){
        if(sequenciabase[i] == 'A' and sequenciabase[i + 1] == 'B' and sequenciabase[i + 2] == 'C') resultado ++;
    }
    return resultado;
}

int main(){
    int tamanho, queries;
    string consulta;
    cin >> tamanho >> queries;
    cin >> consulta;
    vector<char> sequenciabase;

    for(char c : consulta){
        sequenciabase.push_back(c);
    }

    int resposta = quantidadesubstring(sequenciabase, tamanho);

    while(queries--){
        int posicao;
        char caractere;

        cin >> posicao >> caractere;

        if(sequenciabase[posicao - 1] == caractere) cout << resposta << endl;
        else{
            for(int i = 0; i < 3; ++i){
                int start = posicao - i - 1;

                if(0 <= start and start + 2 < tamanho){
                    if(sequenciabase[start] == 'A' and sequenciabase[start + 1] == 'B' and sequenciabase[start + 2] == 'C') resposta --;
                }
            }

            sequenciabase[posicao - 1] = caractere;

            for(int i = 0; i < 3; ++i){
                int start = posicao - i - 1;

                if(0 <= start and start + 2 < tamanho){
                    if(sequenciabase[start] == 'A' and sequenciabase[start + 1] == 'B' and sequenciabase[start + 2] == 'C') resposta ++;
                }
            }
        
            cout << resposta << endl;
        }

    }

    return 0;
}