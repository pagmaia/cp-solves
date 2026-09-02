#include <bits/stdc++.h>

using namespace std;

float calculardistancia(int ax, int ay, int fx, int fy){
    float distancia = 0;
    distancia = sqrt(pow((ax - fx), 2) + pow((ay - fy), 2));

    return distancia;
}


void solve(){
    int tstartx, tstarty, tfinalx, tfinaly, astartx, astarty, afinalx, afinaly = 0;
    cin >> tstartx >> tstarty >> tfinalx >> tfinaly;
    int distancia = 0;
    cin >> astartx >> astarty >> afinalx >> afinaly;
    

}




int main(){
    int testes;
    cin >> testes;

    while(testes --){
        solve();
    }

    return 0;
}