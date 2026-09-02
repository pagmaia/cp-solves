#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;


void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int i = 0;
    int freq1 = 0; int freq2 = 0; int freq3 = 0;
    vector<int> cand;
    while(i < n){
        if(a[i] == 1){
            freq1++;
        }
        else if(a[i] == 2){
            freq2++;
        }
        else{
            freq3++;
        }
        if(freq2 + freq3 <= freq1){
            cand.push_back(i);
        }
        i++;
    }
    
    for(int c : cand){
        freq1 = 0; freq2 = 0; freq3 = 0;
        i = c + 1;
        while(i < n){
            if(a[i] == 1){
            freq1++;
            }
            else if(a[i] == 2){
                freq2++;
            }
            else{
                freq3++;
            }
            if(freq1 + freq2 >= freq3 and i < n - 1){
                cout << "YES" << endl;
                return;
            }
            i++;
        }
    }
    cout << "NO" << endl;
    return;



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



