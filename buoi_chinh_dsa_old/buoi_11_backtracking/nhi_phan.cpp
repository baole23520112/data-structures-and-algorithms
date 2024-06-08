#include <bits/stdc++.h>
#pragma GCC optimize ("03,unroll-loops")
#pragma GCC target ("avx2,bmi,bmi2")
using namespace std;
using ll = long long;
#define mod 1000000007
#define endl '\n'

int x[100], n;

void in(){
    for (int i = 1; i <= n; i++){
        cout << x[i];
    }
    cout << endl;
}

void Try(int i){
    for (int j = 0; j <= 1; j++){
        x[i] = j;
        if (i == n){
            in();
            return;
        }
        else {
            Try(i + 1);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    Try(1);
    for (int len = 1; len <= s.size(); len++){
        for (int start = 0; start <= s.size() - len; start++){
            cout << s.substr(start, len) << endl;
        }
    }
    return 0;
}