#include "bits/stdc++.h"

#define ll long long

using namespace std;


int dig(int i){
    int sum = 0;
    while(i > 0){
        sum += i % 10;
        i /= 10;
    }
    return sum;
}



void solve(){
    ll n;
    cin >> n;
    

    if(n % 9 != 0){
        cout << 0 << endl;
        return;
    }

    ll min = 10;
    ll max = 10e9 + 10;
    while(min <= max){
        ll mid = min + (max - min) / 2;

        ll amigo = mid - dig(mid);

        if(amigo == n){
            cout << 10 << endl;
            return;
        }
        else if(amigo > n){
            max = mid - 1;
        }
        else{
            min = mid + 1;
        }
    }

    cout << 0 << endl;
    return;

}


int main(){
    int t;
    cin >> t;
    while(t--){
	solve();
    }


    return 0;
}



