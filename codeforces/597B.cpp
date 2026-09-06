#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    int pedidos;
    cin >> pedidos;
    vector<pair<int, int>> tempos(pedidos);

    for(int i = 0; i < pedidos; ++i){
        int l; int r;
        cin >> l >> r;
        tempos[i] = {l, r};
    }

    sort(tempos.begin(), tempos.end(),[](const pair<int, int> a, const pair<int,int> b){
        return a.second < b.second;
    });

    int resultado = 1;
    int tempomax = tempos[0].second;

    for(int i = 1; i < pedidos; ++i){
        if(tempos[i].first > tempomax){
            tempomax = tempos[i].second;
            resultado ++;
        }
    }
    cout << resultado << endl;
    
    return 0;
}
