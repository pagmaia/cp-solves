#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    ll tamanho;
    cin >> tamanho;
    vector<ll> array(tamanho);
    stack<pair<ll,ll>> pilha;

    for(int i = 0; i < tamanho; ++i){
        cin >> array[i];
    }

    cout << 0 << " ";
    pilha.push({array[0], 1});

    for(int i = 1; i < tamanho; ++i){
        if(array[i] > pilha.top().first){
            cout << pilha.top().second << " ";
            pilha.push({array[i], i + 1});
        }
        else{
            while(!pilha.empty() and pilha.top().first >= array[i]){
                pilha.pop();
            }
            
            if(pilha.empty()){
                cout << 0 << " ";
            }
            else{
                cout << pilha.top().second << " ";
            }
            pilha.push({array[i], i + 1});
        }
    
    }
    return 0;
}

