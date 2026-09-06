#include <bits/stdc++.h>

using namespace std;

int main(){
    int testes;
    cin >> testes;
    while(testes--){
        int tamanho;
        cin >> tamanho;
        vector<int> array(tamanho);
        int poserradapar = 0; int poserradaimpar = 0;

        for(int i = 0; i < tamanho; ++i){
            cin >> array[i];
            if(i % 2 == 0 and array[i] % 2 == 1){
                poserradapar ++;
            }
            else if(i % 2 == 1 and array[i]% 2 == 0){
                poserradaimpar ++;
            }
        }
        
        if(poserradapar == poserradaimpar){
            cout << poserradaimpar << endl;
        }
        else{
            cout << -1 << endl;
        }
    }

    return 0;
}

