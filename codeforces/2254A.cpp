#include "bits/stdc++.h"
 
#define ll long long
#define endl "\n"
 
using namespace std;
 
void solve(){
    int a, b, c;
    cin >> a >> b >> c;

    int ans = 0;
    while(true){
        int mini = min(min(a, b), c);
        int maxi = max(max(a, b), c);
        if(a == b or a == c or b == c){
            break;
        }
        if(mini == a){
            if(maxi == b){
                b--;
            }
            else if(maxi == c){
                c--;
            }
            a++;
            
        }
        else if(mini == b){
            if(maxi == a){
                a--;
            }
            else if(maxi == c){
                c--;
            }
            b++;
            
        }
        if(mini == c){
            if(maxi == b){
                b--;
            }
            else if(maxi == a){
                a--;
            }
            c++;
            
        }
        ans++;
        
    }
    cout << ans << endl;
    

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

