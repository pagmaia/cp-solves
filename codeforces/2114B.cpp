#include <bits/stdc++.h>

using namespace std;

void solve(){
    int tamanho, pares;
    string binario;
    cin >> tamanho >> pares;
    int countzero = 0;
    int countone = 0;
    cin >> binario;
    
    for(char c : binario){
        if(c == '0'){
            countzero ++;
        }
        else{
            countone ++;
        }
    }
    int minimo = max(countzero, countone) - tamanho / 2;
    int maximo = countzero / 2 + countone / 2;

    if(pares >= minimo and (pares - minimo) % 2 == 0 and pares <= maximo) cout << "YES" << endl;
    else cout << "NO" << endl;
        
    }
int main(){
    int testes;
    cin >> testes;
    while(testes--){
        solve();
    }

    return 0;
}


 