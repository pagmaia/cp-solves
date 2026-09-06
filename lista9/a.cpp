#include <bits/stdc++.h>

#define ll long long

using namespace std;

int s;
int m;
int l;

int dp(int n){
    if(n <= 0){
        return 0;
    }
    
    int a = s + dp(n - 6);
    int b = m + dp(n - 8);
    int c = l + dp(n - 12);

    return min(min(a, b), c);
}

int main(){
    int n;
    cin >> n >> s >> m >> l;
    cout << dp(n);
    
    return 0;
}