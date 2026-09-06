#include <bits/stdc++.h>

using namespace std;

int main(){
    int inter;
    int lampada;
    cin >> inter >> lampada;

    string sequencia;
    vector<string> switchs;
    vector<int> contadores;

    for(int i = 0; i < inter; ++i){
        cin >> sequencia;
        switchs.push_back(sequencia);
    }
    
    for(int j = 0; j < lampada; ++j){
        int count = 0;
        for(int i = 0; i < inter; ++i){
            if((switchs[i][j]) == '1'){
                count += 1;
            }
        }
        contadores.push_back(count);
    }

    for(int i = 0; i < inter; ++i){
        bool switchunico = false;
        for(int j = 0; j < lampada; ++j){
            if(switchs[i][j] == '1' and contadores[j] == 1){
                switchunico = true;
                break;
            }
        }
        if(switchunico == false){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}