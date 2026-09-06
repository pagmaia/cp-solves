#include <bits/stdc++.h>

#define ll long long

using namespace std;

int mex(vector<int> array){
    int mex = 0;
    for(int i = 0; i < array.size(); ++i){
        if(array[i] == mex){
            mex ++;
        }
    }
    return mex;
}

void solve(){
    int tamanho;
    cin >> tamanho;
    vector<int> array(tamanho);
    for(int i = 0; i < tamanho; ++i){
        cin >> array[i];
    }

    sort(array.begin(), array.end());

    cout << mex(array) << endl;
}

int main(){
    int testes;
    cin >> testes;
    while(testes--){
        solve();
    }
    
    return 0;
}