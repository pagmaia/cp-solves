#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;


void solve(){
    int n; int s;
    cin >> n >> s;
    int count0 = 0; int count1 = 0; int count2 = 0;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        if(!a) count0++;
        else if(a == 1) count1++;
        else count2++;
    }
    int sum = count2 * 2 + count1;
    if(s - sum == 1){
        while(count0--) cout << 0 << " ";
        while(count2--) cout << 2 << " ";
        while(count1--) cout << 1 << " ";
        cout << endl;
    }
    else if(sum > s){
        while(count0--) cout << 0 << " ";
        while(count1--) cout << 1 << " ";
        while(count2--) cout << 2 << " ";
        cout << endl;
    }
    else{
        cout << -1 << endl;
    }
}



int main(){
    ios_base::sync_with_stdio(false);	
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
	solve();
    }


    return 0;
}



