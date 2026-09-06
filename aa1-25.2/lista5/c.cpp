#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    int testes;
    cin >> testes;
    int tamanho = 1000000;

    vector<bool> crivo(tamanho);
    crivo[0] = true;
    crivo[1] = true;
    vector<int> primos;
    for(int i = 2; i * i <= tamanho; ++i){
        if(!crivo[i]){
            primos.push_back(i);
            for(int j = i * i; j <= tamanho; j += i){
                crivo[j] = true;
            }
        }
    }
    while(testes--){
        int numero;
        cin >> numero;
        int resposta = 0;
        for(int p: primos){
            if(p > numero){
                break;
            }
            bool medo = true;
            while(p > 10){
                int resto = p % 10;
                p = p / 10;
                if(crivo[p] or resto == 0){
                    medo = false;
                    break;
                }
            }
            if(medo){
                resposta ++;
            }
        }

        cout << resposta << endl;
    }
    
    return 0;
}