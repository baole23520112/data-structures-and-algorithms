#include <bits/stdc++.h>
#pragma GCC optimize("03,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2")
using namespace std;
using ll = long long;
#define mod 1000000007
#define endl '\n'

int x[100], n, k;

void in(){
    for (int i = 1; i <= k; i++){
        cout << x[i];
    }
    cout << endl;
}

void Try(int i){
    for (int j = 1; j <= n; j++){
        x[i] = j;
        if (i == k){
            in();
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
    cin >> n >> k;
    Try(1);
    return 0;
}