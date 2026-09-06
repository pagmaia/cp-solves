#include <bits/stdc++.h>
 
#define ll long long
 
using namespace std;
 
void solve(){
    ll quantidade;
    cin >> quantidade;
    vector<pair<ll,ll>> posicaotempo(quantidade);
 
    for(int i = 0; i < quantidade; i++){
        cin >> posicaotempo[i].first;
    }
    
    for(int i = 0; i < quantidade; i++){
        cin >> posicaotempo[i].second;
    }
 
    ll ini = 0;
    ll fim = 1e18;
    double resposta = 0;
    double tempomaxfinal = 0;
    while(ini <= fim){
        double mid = ini + (fim - ini) / 2;
        double mid2 = mid - 1;
        double tempototalmax = 0;
        double tempomenosummax = 0;
 
        for(int i = 0; i < quantidade; ++i){
            tempototalmax = max(tempototalmax, posicaotempo[i].second + abs(posicaotempo[i].first - mid));
            tempomenosummax = max(tempomenosummax, posicaotempo[i].second + abs(posicaotempo[i].first - mid2));
        }
 
        if(tempototalmax < tempomenosummax){
            resposta = mid;
            ini = mid + 1;
            tempomaxfinal = tempototalmax;
        }

        else{
            fim = mid - 1;
        }
    }
    
    double max1 = 0, max2 = 0;

    max1 = 0, max2 = 0;
    for(int i = 0; i < quantidade; ++i){
        max1 = max(max1, posicaotempo[i].second + abs(posicaotempo[i].first - (resposta - 0.5)));
        max2 = max(max2, posicaotempo[i].second + abs(posicaotempo[i].first - (resposta + 0.5)));
    }
    
    if(max1 <= tempomaxfinal){
        resposta -= 0.5;
    }
    else if(max2 <= tempomaxfinal){
        resposta += 0.5;
    }
    
    cout << fixed << setprecision(6) << resposta << endl;
}
 
 
int main(){
    int testes;
    cin >> testes;
    while(testes--){
        solve();
    }
    
    return 0;
}