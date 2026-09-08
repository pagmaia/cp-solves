#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;


void solve(){
    int n; int k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> freq;
    int sz = 1;
    cin >> a[0];
    for(int i = 1; i < n; i++){
        cin >> a[i];
        if(a[i] > a[i - 1]){
            freq.push_back(sz);
            sz = 0;
        }
        sz++;
    }
    freq.push_back(sz);
    int ans = 0;
    int m = freq.size();
    int del = 0;
    sort(freq.begin(), freq.end());
    int i = 0;
    // 1 1 1 2 2 2 3 3 4
    while(i < m){
        int x = freq[i] - 1;
        int rm = m - i; 
        int total = n - del - (x * rm);
        if(total <= k and !((k - total) % rm)) ans++;
        int j = upper_bound(freq.begin(), freq.end(), freq[i]) - freq.begin();
        del += (j - i) * freq[i];
        i = j;
    }
    cout << ans << endl;
    // 1 1 1 1 1 2 2 2 
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



