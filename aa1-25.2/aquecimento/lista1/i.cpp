#include <bits/stdc++.h>

using namespace std;

void solve(){
    int nbolas;
    int tamanhomesa;
    cin >> nbolas >> tamanhomesa;

    int resultado = 0;
    for(int i = 0; i < nbolas; ++i){
        int direcaox;
        int direcaoy;
        int posx;
        int posy;
        cin >> direcaox >> direcaoy >> posx >> posy;

        if(direcaox == direcaoy){
            resultado += (posx == posy);
        }
        else{
            resultado += (posx + posy == tamanhomesa);
        }
    }
    cout << resultado << endl;
}
int main(){
    int testes;
    cin >> testes;

    while(testes--){
        solve();
    }
    return 0;
}