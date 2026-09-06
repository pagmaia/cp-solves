#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    int questoes;
    cin >> questoes;
    int p1 = 0; int p2 = 0; int p3 = 0;
    int resposta = 0;
    for(int i = 0; i < questoes; ++i){
        int p1 = 0; int p2 = 0; int p3 = 0;
        cin >> p1 >> p2 >> p3;
        if(p1 + p2 + p3 >= 2){
            resposta ++;
        }
        
    }
    cout << resposta << endl;
    
    return 0;
}