#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    int qpalavras;
    cin >> qpalavras;

    for(int i = 0; i < qpalavras; ++i){
        string palavra;
        cin >> palavra;
        if(palavra.size() > 10){
            cout << palavra[0];
            cout << palavra.size() - 2;
            cout << palavra[palavra.size() - 1] << endl;
        }
        else{
            cout << palavra << endl;
        }
    }
    
    return 0;
}