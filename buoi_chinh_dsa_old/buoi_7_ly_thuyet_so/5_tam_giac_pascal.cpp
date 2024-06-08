#include <bits/stdc++.h>
#pragma GCC optimize ("03,unroll-loops")
#pragma GCC target ("avx2,bmi,bmi2")
using namespace std;
using ll = long long;
#define mod 1000000007
#define endl '\n'

int a[100][100];

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n; cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            if (i == 1 || j == 1){
                a[i][j] = 1;
            }
            else {
                a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
            }
        }
    }
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}