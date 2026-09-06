#include "bits/stdc++.h"

using namespace std;

int main(){
    int n;
    int ans = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        int q = 0;
        int a, b, c;
        cin >> a >> b >> c;
        q += a; q += b; q+= c;
        if(q >= 2){
            ans++;
        }
    }
    cout << ans << endl;



    return 0;
}