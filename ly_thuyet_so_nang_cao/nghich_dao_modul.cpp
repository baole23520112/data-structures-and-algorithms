#include <bits/stdc++.h>
#pragma GCC optimize ("03,unroll-loops")
#pragma GCC target ("avx2,bmi,bmi2")
using namespace std;
using ll = long long;
#define mod 1000000007
#define endl '\n'

int x, y, g;

void extended(int a, int b){
    if (b == 0){
        x = 1;
        y = 0;
        g = a;
    }
    else {
        extended(b, a % b);
        int temp = x;
        x = y;
        y = temp - a / b * y;
    }
}

void inverse(int a, int m){
    extended(a, m);
    if (g != 1){
        cout << "Khong ton tai\n";
    }
    else {
        cout << (x % m + m) % m << endl;
    }
}

ll powmod(int a, int b, int c){
    ll res = 1;
    while(b){
        if (b & 1){
            res *= a;
            res %= c;
        }
        a *= a;
        a %= c;
        b /= 2;
    }
    return res;
}

void inverse2(int a, int m){ // (a^(m - 2)) % mod reverse modular of a
    cout << powmod(a, m - 2, m) << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    inverse(8, 17);
    inverse2(8, 17);
    return 0;
}