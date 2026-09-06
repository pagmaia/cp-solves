#include <bits/stdc++.h>

#define ll long long

using namespace std;


int dp(int n, vector<int> &h, vector<int> &c){
    if(n == 1){
        return 0;
    }
    if(n == 2){
        return abs(h[1] - h[2]);
    }
    if(c[n] != -1){
        return c[n];
    }

    int a = abs(dp(n - 1, h, c) + abs(h[n] - h[n - 1]));
    int b = abs(dp(n - 2, h, c) + abs(h[n] - h[n - 2]));

    c[n] = min(a, b);

    return c[n];
}


int main(){
    int n;
    cin >> n;
    vector<int> h(n + 1);
    vector<int> c(n + 1, -1);
    for(int i = 1; i <= n; i++){
        cin >> h[i];
    }
    cout << dp(n, h, c);
    
    return 0;
}