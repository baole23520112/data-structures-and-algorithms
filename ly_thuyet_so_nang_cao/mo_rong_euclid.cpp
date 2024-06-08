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

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a = 55, b = 80;
    extended(a, b);
    cout << "gcd = " << g << endl;
    cout << x << ' ' << y << endl;
    return 0;
}