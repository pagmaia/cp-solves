#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;


void solve(){
    int n;
    cin >> n;

    if(n == 2){
        cout << 2 << endl;
    }
    else if(n == 3){
        cout << 3 << endl;
    }
    else if(n % 2 == 0){
        cout << 0 << endl;
    }
    else{
        cout << 1 << endl;
    }

}

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
	solve();
    }


    return 0;
}



