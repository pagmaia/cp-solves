#include "bits/stdc++.h"

#define ll long long

using namespace std;


ll solve(int n, vector<int> &h){
    int resposta = 1;

    for(int i = 1; i < n; i++){
        int altura = 0;
        int count = 0;
        for(int j = 0; j < n; j += i){
            if(altura == h[j]){
                count ++;
            }
            else{
                altura = h[j];
                count ++;
            }

            resposta = max(resposta, count);
        }
    }
   
    return resposta;

}


int main(){
    int n;
    cin >> n;
    vector<int> h(n);
    for(int i = 0; i < n; i++){
        cin >> h[i];
    }
    
    cout << solve(n, h);


    return 0;
}

