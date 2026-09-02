#include "bits/stdc++.h"

#define ll long long

using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] < x){
            cout << 1 << "\n";
            x = a[i];
        }
        else{
            cout << 0 << "\n";
        }
    }


    return 0;
}



