#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    int w; int k; int n;
    cin >> k >> n >> w;
    ll esperado = 0;

    for(int i = 1; i <= w; ++i){
        esperado += i * k;
    }


    if(esperado - n > 0){
        cout << esperado - n << endl;
    }
    else{
        cout << 0 << endl;
    }

    return 0;
}