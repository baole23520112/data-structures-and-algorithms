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
    int n; cin >> n;
    set<int> b;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
        b.insert(a[i]);
    }
    cout << b.size() << endl;
    int max = -1e9, min = 1e9;
    for (auto x : b){
        if (max < x){
            max = x;
        }
        if (min > x){
            min = x;
        }
    }
    cout << max << ' ' << min << endl;
    for (int &x : a){
        if (max == x){
            x = 0;
        }
        if (min == x){
            x = 0;
        }
    }
    max = -1e9, min = 1e9;
    for (auto x : a){
        if (max < x && x != 0){
            max = x;
        }
        if (min > x && x != 0){
            min = x;
        }
    }
    cout << max << ' ' << min;
    return 0;
}