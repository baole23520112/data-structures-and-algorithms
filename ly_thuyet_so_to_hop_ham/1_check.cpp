#include <bits/stdc++.h>
#pragma GCC optimize ("03,unroll-loops")
#pragma GCC target ("avx2,bmi,bmi2")
using namespace std;
using ll = long long;
#define mod 1000000007
#define endl '\n'

bool check(int n){
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0) return false;
    }
    return n > 1;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    if (check(n)) cout << "YES";
    else cout << "NO";
    return 0;
}