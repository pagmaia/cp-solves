#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    char first = s[0];
    char other;
    int char1 = 0;
    int char2 = 0;

    for(char c: s){
        if(c == first){
            char1 += 1;
        }
        else{
            char2 += 1;
            other = c;
        }
    }
    if(char1 == 1){
        cout << first << endl;
    }

    else{
        cout << other << endl;
    }

    return 0;
}