    #include "bits/stdc++.h"

    #define ll long long
    #define endl "\n"

    using namespace std;


    void solve(){
        int n; cin >> n;
        string a; string b;
        cin >> a >> b;
        pair<int, int> par;
        pair<int, int> impar;
        for(int i = 0; i < n; i++){
        if(!(i % 2) and a[i] == '1') par.first++;
        if(!(i % 2) and b[i] == '1') par.second++;
        if(i % 2 and a[i] == '1') impar.first++;
        if(i % 2 and b[i] == '1') impar.second++;
        }

        if(par.first == par.second and impar.first == impar.second){
            cout << "YES" << endl;
            return;
        }
        cout << "NO" << endl;

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



