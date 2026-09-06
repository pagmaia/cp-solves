#include "bits/stdc++.h"

#define ll long long

using namespace std;


int dp(vector<int> &h, int n){
    int resposta = 0;
    for(int i = 1; i <= n; i++){
        vector<int> dp(n + 1, 1);

        for(int j = 1; j <= n; j++){
            if(j - i >= 1 && h[j] == h[j - i]){
                dp[j] = max(dp[j], dp[j - i] + 1);
            }
        }

        resposta = max(resposta, *max_element(dp.begin(), dp.end()));
    }

    return resposta;
}

int main(){
    int n;
    cin >> n;
    vector<int> h(n + 1);
    for(int i = 1; i <= n; i++){
        cin >> h[i];
    }
    
    cout << dp(h, n);


    return 0;
}

