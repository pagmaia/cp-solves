#include <bits/stdc++.h>

using namespace std;

int main(){
    int tamanho;
    int queries;
    int count = 0;
    cin >> tamanho >> queries;

    vector<int> valores;
    vector<int> valoressort;

    for(int i = 0; i < tamanho; ++i){
        int valor;
        cin >> valor;
        if(valor == 1) count ++;
        valores.push_back(valor);
        valoressort.push_back(valor);
    }
    
    sort(valoressort.begin(), valoressort.end(), greater<int>());

    for(int i = 0; i < queries; ++i){
        int tipo;
        int k;
        cin >> tipo >> k;

        if(tipo == 1){
            valores[k - 1] = 1 - valores[k - 1];

            if(valores[k - 1] == 0){ 
                valoressort[count - 1] = 0; 
                count --;
            }
            else{
                valoressort[count] = 1;
                count ++;
            }
        }

        else{
            cout << valoressort[k - 1] << endl;
        }
    }

}

