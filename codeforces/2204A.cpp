#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;


void solve(){
    int n;
    cin >> n;
    vector<char> a(n);
    vector<bool> vis(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int count = 0;
    int i = 0;
    while(true){
        count ++;
        if(a[i] == 'R' and !vis[i + 1]){
            i++;
        }
        else if(a[i] == 'R' and !vis[i - 1]){
            i--;
        }
        else{
            break;
        }
    }

    cout << count << endl;
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



