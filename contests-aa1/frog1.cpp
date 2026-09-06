#include <bits/stdc++.h>

#define ll long long

using namespace std;


int dp(int i, vector<int> &h, vector<int> &custo){
    if(i == 1){
        return 0;
    }
    if(i == 2){
        return abs(h[1] - h[2]);    
    }
    if(custo[i] != -1){
        return custo[i];
    }

    int a = dp(i - 1, h, custo) + abs(h[i] - h[i - 1]);
    int b = dp(i - 2, h, custo) + abs(h[i] - h[i - 2]);

    custo[i] = min(a, b);

    return custo[i];

}


int main(){
    int n;
    cin >> n;
    vector<int> h(n + 1);
    vector<int> custo(n + 1, -1);
    for(int i = 0; i < n; i++){
        cin >> h[i + 1];
    }

    cout << dp(n, h, custo) << endl;

    return 0;
}