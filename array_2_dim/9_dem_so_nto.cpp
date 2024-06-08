#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool check(int n){
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            return false;
        }
    }
    return n > 1;
}

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n; cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if ((i == j || i == n - 1 - j)&& check(a[i][j])){
                count++;
            }
        }
    }
    if (n % 2 != 0 && check(a[n / 2][n / 2])){
        count--;
    }
    cout << count;
    return 0;
}