#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool check(int n){
    int newnum = 0;
    int k = n;
    while(n){
        newnum = newnum * 10 + (n % 10);
        n /= 10;
    }
    return newnum == k;
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
        for (int j = 0; j <= i; j++){
            if (check(a[i][j]))
                count++;
        }
    }
    cout << count;
    return 0;
}