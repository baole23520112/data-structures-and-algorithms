#include <bits/stdc++.h>
using namespace std;

using ll = long long;


int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    map<int, int> check;
    int n; cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (check[a[i][j]] == i)
                check[a[i][j]] = i + 1;
        }
    }
    bool ktr = false;
    for (auto x : check){
        if (x.second == n){
            ktr = true;
            cout << x.first << ' ';
        }    
    }
    if (ktr == false) 
        cout << "NOT FOUND";
    return 0;
}