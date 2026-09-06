#include <bits/stdc++.h>

#define ll long long

using namespace std;

void solve(){
    int tamanho; int k;
    cin >> tamanho >> k;
    string osu;
    cin >> osu;
    vector<int> posicoesum(tamanho);
    int countum = 0;
    int l = 0; int r = tamanho - 1;

    while(r >= 0){
        if(osu[r] == '1'){
            posicoesum[l] = r;
            l ++;
            countum ++;
        }
        r --;
    }

    int resposta; int tamanhoum;
    resposta = tamanhoum = countum;

    if(resposta <= 1){
        cout << resposta << endl;
        return;
    }

    int i = 0;
    while(i < tamanhoum - 1){
        if(posicoesum[i] - posicoesum[i + 1] <= k - 1){
            resposta --;
        }
        i ++;
    }
    cout << resposta << endl;

}

int main(){
    int testes;
    cin >> testes;
    while(testes--){
        solve();
    }
    return 0;
}