#include <bits/stdc++.h>

#define ll long long

using namespace std;

void solve(){
    int n, s;
    cin >> n >> s;
    int resposta = 0;
    for(int i = 0; i < n; i++){
        int dx, dy, x, y;
        cin >> dx >> dy >> x >> y;

        if(x == y and dx == dy){
            resposta ++;
        }
        else if(x + y == s and dx != dy){
            resposta ++;
        }
    }

    cout << resposta << endl;

}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}