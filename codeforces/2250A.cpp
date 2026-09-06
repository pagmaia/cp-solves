    #include "bits/stdc++.h"
    
    #define ll long long
    #define endl "\n"
    
    using namespace std;
    
    
    void solve(){
        int n;
        cin >> n;
        int maxeven = 0;
        int minodd = 1000000000;
        int a = 0;
        for(int i = 0; i < n; i++){
            cin >> a;
            if(i % 2 == 1 and a > maxeven){
                maxeven = a;
            }
            if(i % 2 == 0 and a < minodd){
                minodd = a;
            }
        }
        
        if(!(n % 2) and maxeven + 2 <= minodd){
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

